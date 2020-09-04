//**************************** Defination part for FE-CB System *************************//

#ifndef IFLO_ETH_H_INCLUDED
#define IFLO_ETH_H_INCLUDED

#define SYSTEM_5	    	"sigcon"
#define Cmd_500			"setilo"
#define Cmd_501			"setif"
#define Cmd_502			"setofatten"
#define Cmd_503			"domon"
#define Cmd_504			"srvrst"
#define Cmd_505			"fpsrst"
#define Cmd_506			"setsigcon" 
#define Cmd_507			"setifatten"

int form_inter_resp(parseCMSCmd *, devResponse *);
int cmd_validation(parseCMSCmd *, devResponse *);
void fillSetpara(parseCMSCmd *, devResponse *);
void IFLO_form_final_resp(parseCMSCmd *, devResponse *);
int command_process_IFLO(parseCMSCmd *, devResponse *);

#endif
