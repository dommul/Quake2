#ifndef __CONSOLE_INCLUDED__
#define __CONSOLE_INCLUDED__


extern qboolean con_initialized;


void Con_DrawCharacter (int cx, int line, int num);

void Con_CheckResize (void);
void Con_Init (void);
void Con_DrawConsole (float frac);
void Con_Print (char *txt);
void Con_CenteredPrint (char *text);
void Con_Clear_f (void);
void Con_DrawNotify (qboolean drawBack);
void Con_ClearNotify (void);
void Con_ToggleConsole_f (void);

void Key_Console (int key, int modKey);
void Key_Message (int key);


#endif
