#include <iostream>

class Log
{
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
private:
	int M_LogLevel = LogLevelInfo;
public:
	void SetLevel(int level)
	{
		M_LogLevel = level;
	}

	void Error(const char* message)
	{
		if (M_LogLevel >= LogLevelError)
			std:: cout << "[ERROR]:" << message << std::endl;

	}

	void Warn(const char* message)
	{
		if (M_LogLevel >= LogLevelWarning)
			std:: cout << "[WARNING]:" << message << std::endl;
	
	}


	void Info(const char* message)
	{
		if (M_LogLevel >= LogLevelInfo)
			std:: cout << "[INFO]:" << message << std::endl;

	}

};


int main()
{
	Log log;
	log.SetLevel(log.LogLevelWarning);
	log.Warn("Hello!");
	log.Error("Hello!");
	log.Info("Hello!");
	std:: cin.get();
}