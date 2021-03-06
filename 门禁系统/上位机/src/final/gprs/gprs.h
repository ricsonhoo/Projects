
#ifndef __GPRS_H__
#define __GPRS_H__

char * cmd[20]={
		"at",
		"ate1",
		"at+chfa=1", 			//设置通话通道为1,AT+CHFA 命令切换主副音频通道
		"at+clvl=100",			//设置受话器音量最大, AT+CLVL 命令可以调节输出音频信号增益
		"at+cmic=1,10"			//设置通道1的话筒增益
};


void gprs_init();
void gprs_hold();
void gprs_ans();
void gprs_call(char *number);
void gprs_msg(char *number, char *text);
void gprs_baud(char *baud);

#endif
