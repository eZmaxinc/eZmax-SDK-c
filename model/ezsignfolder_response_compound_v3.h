/*
 * ezsignfolder_response_compound_v3.h
 *
 * An Ezsignfolder Object and children to create a complete structure
 */

#ifndef _ezsignfolder_response_compound_v3_H_
#define _ezsignfolder_response_compound_v3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_response_compound_v3_t ezsignfolder_response_compound_v3_t;

#include "common_audit.h"
#include "computed_e_ezsignfolder_access.h"
#include "custom_timezone_with_code_response.h"
#include "field_e_ezsignfolder_completion.h"
#include "field_e_ezsignfolder_documentdependency.h"
#include "field_e_ezsignfolder_step.h"
#include "object.h"

// Enum  for ezsignfolder_response_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignfolder_response_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignfolder_response_compound_v3__PerEzsigndocument, ezmax_api_definition__full_ezsignfolder_response_compound_v3__PerEzsignfolder } ezmax_api_definition__full_ezsignfolder_response_compound_v3__e;

char* ezsignfolder_response_compound_v3_e_ezsignfolder_completion_ToString(ezmax_api_definition__full_ezsignfolder_response_compound_v3__e e_ezsignfolder_completion);

ezmax_api_definition__full_ezsignfolder_response_compound_v3__e ezsignfolder_response_compound_v3_e_ezsignfolder_completion_FromString(char* e_ezsignfolder_completion);

// Enum  for ezsignfolder_response_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignfolder_response_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignfolder_response_compound_v3__All, ezmax_api_definition__full_ezsignfolder_response_compound_v3__EzsignsignerOnly } ezmax_api_definition__full_ezsignfolder_response_compound_v3__e;

char* ezsignfolder_response_compound_v3_e_ezsignfolder_documentdependency_ToString(ezmax_api_definition__full_ezsignfolder_response_compound_v3__e e_ezsignfolder_documentdependency);

ezmax_api_definition__full_ezsignfolder_response_compound_v3__e ezsignfolder_response_compound_v3_e_ezsignfolder_documentdependency_FromString(char* e_ezsignfolder_documentdependency);

// Enum  for ezsignfolder_response_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignfolder_response_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignfolder_response_compound_v3__Unsent, ezmax_api_definition__full_ezsignfolder_response_compound_v3__PendingSend, ezmax_api_definition__full_ezsignfolder_response_compound_v3__Sent, ezmax_api_definition__full_ezsignfolder_response_compound_v3__PartiallySigned, ezmax_api_definition__full_ezsignfolder_response_compound_v3__Expired, ezmax_api_definition__full_ezsignfolder_response_compound_v3__Completed, ezmax_api_definition__full_ezsignfolder_response_compound_v3__Archived, ezmax_api_definition__full_ezsignfolder_response_compound_v3__Disposed } ezmax_api_definition__full_ezsignfolder_response_compound_v3__e;

char* ezsignfolder_response_compound_v3_e_ezsignfolder_step_ToString(ezmax_api_definition__full_ezsignfolder_response_compound_v3__e e_ezsignfolder_step);

ezmax_api_definition__full_ezsignfolder_response_compound_v3__e ezsignfolder_response_compound_v3_e_ezsignfolder_step_FromString(char* e_ezsignfolder_step);

// Enum  for ezsignfolder_response_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignfolder_response_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignfolder_response_compound_v3__Signer, ezmax_api_definition__full_ezsignfolder_response_compound_v3__Read, ezmax_api_definition__full_ezsignfolder_response_compound_v3__Modify, ezmax_api_definition__full_ezsignfolder_response_compound_v3__Full } ezmax_api_definition__full_ezsignfolder_response_compound_v3__e;

char* ezsignfolder_response_compound_v3_e_ezsignfolder_access_ToString(ezmax_api_definition__full_ezsignfolder_response_compound_v3__e e_ezsignfolder_access);

ezmax_api_definition__full_ezsignfolder_response_compound_v3__e ezsignfolder_response_compound_v3_e_ezsignfolder_access_FromString(char* e_ezsignfolder_access);



typedef struct ezsignfolder_response_compound_v3_t {
    int pki_ezsignfolder_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    struct object_t *obj_ezsignfoldertype; //model
    int fki_timezone_id; //numeric
    field_e_ezsignfolder_completion_t *e_ezsignfolder_completion; // custom
    field_e_ezsignfolder_documentdependency_t *e_ezsignfolder_documentdependency; // custom
    char *s_ezsignfoldertype_name_x; // string
    int fki_billingentityinternal_id; //numeric
    char *s_billingentityinternal_description_x; // string
    int fki_ezsigntsarequirement_id; //numeric
    char *s_ezsigntsarequirement_description_x; // string
    char *s_ezsignfolder_description; // string
    char *t_ezsignfolder_note; // string
    int b_ezsignfolder_isdisposable; //boolean
    int i_ezsignfolder_sendreminderfirstdays; //numeric
    int i_ezsignfolder_sendreminderotherdays; //numeric
    char *dt_ezsignfolder_delayedsenddate; // string
    char *dt_ezsignfolder_duedate; // string
    char *dt_ezsignfolder_sentdate; // string
    char *dt_ezsignfolder_scheduledarchive; // string
    char *dt_ezsignfolder_scheduleddispose; // string
    field_e_ezsignfolder_step_t *e_ezsignfolder_step; // custom
    char *dt_ezsignfolder_close; // string
    char *t_ezsignfolder_message; // string
    struct common_audit_t *obj_audit; //model
    char *s_ezsignfolder_externalid; // string
    computed_e_ezsignfolder_access_t *e_ezsignfolder_access; // custom
    struct custom_timezone_with_code_response_t *obj_timezone; //model

} ezsignfolder_response_compound_v3_t;

ezsignfolder_response_compound_v3_t *ezsignfolder_response_compound_v3_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    object_t *obj_ezsignfoldertype,
    int fki_timezone_id,
    field_e_ezsignfolder_completion_t *e_ezsignfolder_completion,
    field_e_ezsignfolder_documentdependency_t *e_ezsignfolder_documentdependency,
    char *s_ezsignfoldertype_name_x,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_ezsigntsarequirement_id,
    char *s_ezsigntsarequirement_description_x,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    int b_ezsignfolder_isdisposable,
    int i_ezsignfolder_sendreminderfirstdays,
    int i_ezsignfolder_sendreminderotherdays,
    char *dt_ezsignfolder_delayedsenddate,
    char *dt_ezsignfolder_duedate,
    char *dt_ezsignfolder_sentdate,
    char *dt_ezsignfolder_scheduledarchive,
    char *dt_ezsignfolder_scheduleddispose,
    field_e_ezsignfolder_step_t *e_ezsignfolder_step,
    char *dt_ezsignfolder_close,
    char *t_ezsignfolder_message,
    common_audit_t *obj_audit,
    char *s_ezsignfolder_externalid,
    computed_e_ezsignfolder_access_t *e_ezsignfolder_access,
    custom_timezone_with_code_response_t *obj_timezone
);

void ezsignfolder_response_compound_v3_free(ezsignfolder_response_compound_v3_t *ezsignfolder_response_compound_v3);

ezsignfolder_response_compound_v3_t *ezsignfolder_response_compound_v3_parseFromJSON(cJSON *ezsignfolder_response_compound_v3JSON);

cJSON *ezsignfolder_response_compound_v3_convertToJSON(ezsignfolder_response_compound_v3_t *ezsignfolder_response_compound_v3);

#endif /* _ezsignfolder_response_compound_v3_H_ */

