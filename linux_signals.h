
struct {
	char *name;
	char *mess;
} linux_signals[] = {
	{ "",		"Unknown signal 0"		},
	{ "HUP",	"Hangup"			},
	{ "INT",	"Interrupt"			},
	{ "QUIT",	"Quit"				},
	{ "ILL",	"Illegal instruction"		},
	{ "TRAP",	"Trace/breakpoint trap"		},
	{ "ABRT",	"Aborted"			},
	{ "BUS",	"Bus error"			},
	{ "FPE",	"Floating point exception"	},
	{ "KILL",	"Killed"			},
	{ "USR1",	"User defined signal 1"		},
	{ "SEGV",	"Segmentation fault"		},
	{ "USR2",	"User defined signal 2"		},
	{ "PIPE",	"Broken pipe"			},
	{ "ALRM",	"Alarm clock"			},
	{ "TERM",	"Terminated"			},
	{ "STKFLT",	"Stack fault"			},
	{ "CHLD",	"Child exited"			},
	{ "CONT",	"Continued"			},
	{ "STOP",	"Stopped (signal)"		},
	{ "TSTP",	"Stopped"			},
	{ "TTIN",	"Stopped (tty input)"		},
	{ "TTOU",	"Stopped (tty output)"		},
	{ "URG",	"Urgent I/O condition"		},
	{ "XCPU",	"CPU time limit exceeded"	},
	{ "XFSZ",	"File size limit exceeded"	},
	{ "VTALRM",	"Virtual timer expired"		},
	{ "PROF",	"Profiling timer expired"	},
	{ "WINCH",	"Window changed"		},
	{ "IO",		"I/O possible"			},
	{ "PWR",	"Power failure"			},
	{ "SYS",	"Bad system call"		},
	{ "",		"Unknown signal 32"		},
	{ "",		"Unknown signal 33"		},
	{ "RTMIN",	"Real-time signal 0"		},
	{ "RTMIN+1",	"Real-time signal 1"		},
	{ "RTMIN+2",	"Real-time signal 2"		},
	{ "RTMIN+3",	"Real-time signal 3"		},
	{ "RTMIN+4",	"Real-time signal 4"		},
	{ "RTMIN+5",	"Real-time signal 5"		},
	{ "RTMIN+6",	"Real-time signal 6"		},
	{ "RTMIN+7",	"Real-time signal 7"		},
	{ "RTMIN+8",	"Real-time signal 8"		},
	{ "RTMIN+9",	"Real-time signal 9"		},
	{ "RTMIN+10",	"Real-time signal 10"		},
	{ "RTMIN+11",	"Real-time signal 11"		},
	{ "RTMIN+12",	"Real-time signal 12"		},
	{ "RTMIN+13",	"Real-time signal 13"		},
	{ "RTMIN+14",	"Real-time signal 14"		},
	{ "RTMIN+15",	"Real-time signal 15"		},
	{ "RTMAX-14",	"Real-time signal 16"		},
	{ "RTMAX-13",	"Real-time signal 17"		},
	{ "RTMAX-12",	"Real-time signal 18"		},
	{ "RTMAX-11",	"Real-time signal 19"		},
	{ "RTMAX-10",	"Real-time signal 20"		},
	{ "RTMAX-9",	"Real-time signal 21"		},
	{ "RTMAX-8",	"Real-time signal 22"		},
	{ "RTMAX-7",	"Real-time signal 23"		},
	{ "RTMAX-6",	"Real-time signal 24"		},
	{ "RTMAX-5",	"Real-time signal 25"		},
	{ "RTMAX-4",	"Real-time signal 26"		},
	{ "RTMAX-3",	"Real-time signal 27"		},
	{ "RTMAX-2",	"Real-time signal 28"		},
	{ "RTMAX-1",	"Real-time signal 29"		},
	{ "RTMAX",	"Real-time signal 30"		}
};

