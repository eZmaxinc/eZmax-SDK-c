/*
 * field_e_ezsignfoldertype_pdfanoncompliantaction.h
 *
 * The Action to do if the PDFA is non compliant of the Ezsignfolder type.  * **Reject** is for rejecting the document * **Convert** is for converting to the fkiPdfalevelIDConvert configured
 */

#ifndef _field_e_ezsignfoldertype_pdfanoncompliantaction_H_
#define _field_e_ezsignfoldertype_pdfanoncompliantaction_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsignfoldertype_pdfanoncompliantaction_t field_e_ezsignfoldertype_pdfanoncompliantaction_t;


// Enum  for field_e_ezsignfoldertype_pdfanoncompliantaction

typedef enum { ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__NULL = 0, ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__Reject, ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__Convert } ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__e;

char* field_e_ezsignfoldertype_pdfanoncompliantaction_field_e_ezsignfoldertype_pdfanoncompliantaction_ToString(ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__e field_e_ezsignfoldertype_pdfanoncompliantaction);

ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__e field_e_ezsignfoldertype_pdfanoncompliantaction_field_e_ezsignfoldertype_pdfanoncompliantaction_FromString(char* field_e_ezsignfoldertype_pdfanoncompliantaction);

//cJSON *field_e_ezsignfoldertype_pdfanoncompliantaction_field_e_ezsignfoldertype_pdfanoncompliantaction_convertToJSON(ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__e field_e_ezsignfoldertype_pdfanoncompliantaction);

//ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__e field_e_ezsignfoldertype_pdfanoncompliantaction_field_e_ezsignfoldertype_pdfanoncompliantaction_parseFromJSON(cJSON *field_e_ezsignfoldertype_pdfanoncompliantactionJSON);

#endif /* _field_e_ezsignfoldertype_pdfanoncompliantaction_H_ */

