//ARM -> pru0
#define EVENT_BIT               21 //keep for now, later replace with 'EV_ARM_PRU0'
#define IF_EVENT                PINTC_SRSR0 & (1 << EVENT_BIT)

#define MS                      0x30d40 //number of clock cycles it takes for 1ms
#define uS			0xC8    //number of clock cycles it take for 1uS
/*max number of DIO pins*/
#define MAX_DIO			12

/* max data area (in terms of index for var_loc[])*/
#define MAX_DATA		239

/* start of DIO, AIO */
#define DIO_OFF			240
#define AIO_OFF			256

/* 
	sys calls ids
	Different syscall values, aliases and their meaning
*/

// PWM module addresses
// TBCTL (Time-Base Control)
// = = = = = = = = = = = = = = = = = = = = = = = = = =
// TBCNT MODE bits
#define TB_COUNT_UP 0x0
#define TB_COUNT_DOWN 0x1
#define TB_COUNT_UPDOWN 0x2
#define TB_FREEZE 0x3
// PHSEN bit
#define TB_DISABLE 0x0
#define TB_ENABLE 0x1
// PRDLD bit
#define TB_SHADOW 0x0
#define TB_IMMEDIATE 0x1
// SYNCOSEL bits
#define TB_SYNC_IN 0x0
#define TB_CTR_ZERO 0x1
#define TB_CTR_CMPB 0x2
#define TB_SYNC_DISABLE 0x3
// HSPCLKDIV and CLKDIV bits
#define TB_DIV1 0x0
#define TB_DIV2 0x1
#define TB_DIV4 0x2
// PHSDIR bit
#define TB_DOWN 0x0
#define TB_UP 0x1
// CMPCTL (Compare Control)
// = = = = = = = = = = = = = = = = = = = = = = = = = =
// LOADAMODE and LOADBMODE bits
#define CC_CTR_ZERO 0x0
#define CC_CTR_PRD 0x1
#define CC_CTR_ZERO_PRD 0x2
#define CC_LD_DISABLE 0x3
// SHDWAMODE and SHDWBMODE bits
#define CC_SHADOW 0x0
#define CC_IMMEDIATE 0x1
// AQCTLA and AQCTLB (Action-qualifier Control)
// = = = = = = = = = = = = = = = = = = = = = = = = = =
// ZRO, PRD, CAU, CAD, CBU, CBD bits
#define AQ_NO_ACTION 0x0
#define AQ_CLEAR 0x1
#define AQ_SET 0x2
#define AQ_TOGGLE 0x3
// DBCTL (Dead-Band Control)
// = = = = = = = = = = = = = = = = = = = = = = = = = =
// MODE bits
#define DB_DISABLE 0x0
#define DBA_ENABLE 0x1
#define DBB_ENABLE 0x2
#define DB_FULL_ENABLE 0x3
// POLSEL bits
#define DB_ACTV_HI 0x0
#define DB_ACTV_LOC 0x1
#define DB_ACTV_HIC 0x2
#define DB_ACTV_LO 0x3
// PCCTL (chopper control)
// = = = = = = = = = = = = = = = = = = = = = = = = = =
// CHPEN bit
#define CHP_ENABLE 0x0
#define CHP_DISABLE 0x1
// CHPFREQ bits
#define CHP_DIV1 0x0
#define CHP_DIV2 0x1
#define CHP_DIV3 0x2
#define CHP_DIV4 0x3
#define CHP_DIV5 0x4
#define CHP_DIV6 0x5
#define CHP_DIV7 0x6
#define CHP_DIV8 0x7
// CHPDUTY bits
#define CHP1_8TH 0x0
#define CHP2_8TH 0x1
#define CHP3_8TH 0x2
#define CHP4_8TH 0x3
#define CHP5_8TH 0x4
#define CHP6_8TH 0x5
#define CHP7_8TH 0x6
// TZSEL (Trip-zone Select)
// = = = = = = = = = = = = = = = = = = = = = = = = = =
// CBCn and OSHTn bits
#define TZ_ENABLE 0x0
#define TZ_DISABLE 0x1
// TZCTL (Trip-zone Control)
// = = = = = = = = = = = = = = = = = = = = = = = = = =
// TZA and TZB bits
#define TZ_HIZ 0x0
#define TZ_FORCE_HI 0x1
#define TZ_FORCE_LO 0x2
#define TZ_DISABLE 0x3
// ETSEL (Event-trigger Select)
// = = = = = = = = = = = = = = = = = = = = = = = = = =
// INTSEL, SOCASEL, SOCBSEL bits
#define ET_CTR_ZERO 0x1
#define ET_CTR_PRD 0x2
#define ET_CTRU_CMPA 0x4
#define ET_CTRD_CMPA 0x5
#define ET_CTRU_CMPB 0x6
#define ET_CTRD_CMPB 0x7
// ETPS (Event-trigger Prescale)
// = = = = = = = = = = = = = = = = = = = = = = = = = =
// INTPRD, SOCAPRD, SOCBPRD bits
#define ET_DISABLE 0x0
#define ET_1ST 0x1
#define ET_2ND 0x2
#define ET_3RD 0x3

//clock variable definitions
#define CM_PER_EPWMSS1_CLKCTRL 0xcc

/* doc: spruh73c, table 2.2 */
#define CM_PER_MIO_ADDR 0x44e00000
#define CM_PER_MIO_SIZE (128 * 1024)

/* doc: spruh73c, table 2.3 */
#define PWMSS0_MIO_ADDR 0x48300000
#define PWMSS1_MIO_ADDR 0x48302000
#define PWMSS2_MIO_ADDR 0x48304000
#define PWMSS_MIO_SIZE (4 * 1024)

/* doc: spruh73c, section 15 */
#define PWMSS_REG_IDVER 0x00
#define PWMSS_REG_SYSCONFIG 0x04
#define PWMSS_REG_CLKCONFIG 0x08
#define PWMSS_REG_CLKSTATUS 0x0c
#define PWMSS_EPWM_REG_BASE 0x48302200

/* doc: spruh73c, table 15.59 */
/* warning: 16 bit registers */
#define EPWM_REG_TBCTL (PWMSS_EPWM_REG_BASE + 0x00)
#define EPWM_REG_TBSTS (PWMSS_EPWM_REG_BASE + 0x02)
#define EPWM_REG_TBHSHR (PWMSS_EPWM_REG_BASE + 0x04)
#define EPWM_REG_TBPHS (PWMSS_EPWM_REG_BASE + 0x06)
#define EPWM_REG_TBCNT (PWMSS_EPWM_REG_BASE + 0x08)
#define EPWM_REG_TBPRD (PWMSS_EPWM_REG_BASE + 0x0a)

/* doc: spruh73c, table 15.65 */
/* warning: 16 bit registers */
#define EPWM_REG_CMPCTL (PWMSS_EPWM_REG_BASE + 0x0e)
#define EPWM_REG_CMPAHR (PWMSS_EPWM_REG_BASE + 0x10)
#define EPWM_REG_CMPA (PWMSS_EPWM_REG_BASE + 0x12)
#define EPWM_REG_CMPB (PWMSS_EPWM_REG_BASE + 0x14)

/* doc: spruh73c, table 15.69 */
/* warning: 16 bit registers */
#define EPWM_REG_AQCTLA (PWMSS_EPWM_REG_BASE + 0x16)
#define EPWM_REG_AQCTLB (PWMSS_EPWM_REG_BASE + 0x18)
#define EPWM_REG_AQSFRC (PWMSS_EPWM_REG_BASE + 0x1a)
#define EPWM_REG_AQCSFRC (PWMSS_EPWM_REG_BASE + 0x1c)

/* doc: spruh73c, table 15.74 */
/* warning: 16 bit registers */
#define EPWM_REG_DBCTL (PWMSS_EPWM_REG_BASE + 0x1e)
#define EPWM_REG_DBRED (PWMSS_EPWM_REG_BASE + 0x20)
#define EPWM_REG_DBFED (PWMSS_EPWM_REG_BASE + 0x22)

/* doc: spruh73c, table 15.78 */
/* warning: 16 bit registers */
#define EPWM_REG_TZSEL (PWMSS_EPWM_REG_BASE + 0x24)
#define EPWM_REG_TZCTL (PWMSS_EPWM_REG_BASE + 0x28)
#define EPWM_REG_TZEINT (PWMSS_EPWM_REG_BASE + 0x2a)
#define EPWM_REG_TZFLG (PWMSS_EPWM_REG_BASE + 0x2c)
#define EPWM_REG_TZCLR (PWMSS_EPWM_REG_BASE + 0x2e)
#define EPWM_REG_TZFRC (PWMSS_EPWM_REG_BASE + 0x30)

/* doc: spruh73c, table 15.85 */
/* warning: 16 bit registers */
#define EPWM_REG_ETSEL (PWMSS_EPWM_REG_BASE + 0x32)
#define EPWM_REG_ETPS (PWMSS_EPWM_REG_BASE + 0x34)
#define EPWM_REG_ETFLG (PWMSS_EPWM_REG_BASE + 0x36)
#define EPWM_REG_ETCLR (PWMSS_EPWM_REG_BASE + 0x38)
#define EPWM_REG_ETFRC (PWMSS_EPWM_REG_BASE + 0x3a)

/* doc: spruh73c, table 15.91 */
/* warning: 16 bit registers */
#define EPWM_REG_PCCTL (PWMSS_EPWM_REG_BASE + 0x3c)

/* doc: spruh73c, table 15.99 */
/* note: doc < rev. j is wrong, register offset is 0xc0. see this post: */
/* http://e2e.ti.com/support/embedded/starterware/f/790/p/301065/1139333.aspx */
/* warning: 16 bit registers */

#define EPWM_REG_HRCTL (PWMSS_EPWM_REG_BASE + 0xc0)

//GPIO0 module address
#define mmio32(x) (*(volatile unsigned long *)(x))
#define GPIO_1 (0x4804C000)
#define GPIO_CLEARDATAOUT (GPIO_1 + 0x190)
#define GPIO_SETDATAOUT (GPIO_1 + 0x194)
#define GPIO_OE (GPIO_1 + 0x134)

//DEBUG - Sets all output pins to high
#define SYS_DEBUG       0

//INIT - initializes the shm address, 
//writes into it so kernel knows that pru can talk via shm
#define SYS_INIT        1

//EXEC - start or pause script execution
#define SYS_EXEC        2

//ABORT - aborts the running script, resets env
#define SYS_ABRT        3

//returns the status of whether a script is executing
#define SYS_STAT        4

//a single inst cmd, 32 bit, to be executed next cycle.
#define SYS_INST_32	5

//a single inst cmd, 64 bit, to be executed next cycle.
#define SYS_INST_64	6

/* base address pointer of the instruction stream */
u32 *shm_code = 0;

/* base address pointer of the return value stream */
u32 *shm_ret = 0;

/* offset (from shm_ret) to current return value loc*/
int ret_pointer = 1;

/* the compiled 32 bit instruction */
u32 single_command = 0;

/* 2nd word of the compiled 64 bit instruction */
u32 single_command_2 = 0;

/* pointer to current instruction in terms of offset */
int inst_pointer = 0;

/* boolean value, true if there is a botspeak script under execution */
int is_executing = false;

/* boolean value, true if wait is being executed */
int is_waiting = false;

extern void sc_downcall(int (*handler)(u32 nr, u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4));

/*instruction set encoding */
#define NOP		0

/*SET RES[x], y - IO operations*/
#define SET_DIO_a       1
#define SET_DIO_b       2
#define SET_DIO_c       3
#define SET_PWM_a       4
#define SET_PWM_b       5
#define SET_PWM_c       6
#define SET_AIO_a       7
#define SET_AIO_b       8
#define SET_AIO_c       9

/*Variable set operations*/
#define SET_32_a	16
#define SET_32_b	17
#define SET_64		18
#define SET_ARR_DEC	19
/*If conditions*/
#define IF_EQ		32
#define IF_NEQ		33
#define IF_GTE		34
#define IF_LTE		35
#define IF_GT		36
#define IF_LT		37

/*single operand instructions*/
#define WAIT		20
#define GOTO		21
#define GET		22
#define WAIT_64		23

/*arithmetic instructions*/
#define ADD_32		48
#define ADD_64		49
#define SUB_32		50
#define SUB_64		51
#define MUL_32		52
#define MUL_64		53
#define DIV_32		54
#define DIV_64		55
#define MOD_32		56
#define MOD_64		57

/*bit wise operations*/
#define BSL_32		64
#define BSL_64		65
#define BSR_32		66
#define BSR_64		67
#define AND_32		68
#define AND_64		69
#define OR_32		70
#define OR_64		71
#define NOT_32		72
#define NOT_64		73

#define HALT		127


