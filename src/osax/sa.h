#ifndef SA_H
#define SA_H

#include "common.h"

#define PAYLOAD_STATUS_SUCCESS   0
#define PAYLOAD_STATUS_OUTDATED  1
#define PAYLOAD_STATUS_NO_ATTRIB 2

int scripting_addition_load(void);
bool scripting_addition_is_installed(void);
int scripting_addition_uninstall(void);
int scripting_addition_install(void);

#endif
