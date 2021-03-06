/**
 * Log plugin vv0.5
 * by maddinat0r
 */

#if defined log_plugin_included
	#endinput
#endif
#define log_plugin_included


#if !defined E_LOGLEVEL
enum E_LOGLEVEL
{
	NONE = 0,
	DEBUG = 1,
	INFO = 2,
	WARNING = 4,
	ERROR = 8,
	FATAL = 16,
	VERBOSE = 32
};
#endif


native Logger:CreateLog(const name[], bool:debuginfo = true);
native DestroyLog(Logger:logger);

native bool:IsLogLevel(Logger:logger, E_LOGLEVEL:level);

native Log(Logger:logger, E_LOGLEVEL:level, const msg[], {Float,_}:...);
