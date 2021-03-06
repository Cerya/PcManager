#ifndef _LOGPRIORITY_H_
#define _LOGPRIORITY_H_

typedef enum{
	LOG_FATAL = 0,
	LOG_ALERT = 1,
	LOG_CRIT  = 2,
	LOG_ERROR = 3,
	LOG_WARN  = 4,
	LOG_NOTICE= 5,
	LOG_INFO  = 6,
	LOG_DEBUG = 7,
	LOG_NOTSET= 8
}KXE_LOG_LEVEL;

#endif