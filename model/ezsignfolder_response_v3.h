/*
 * ezsignfolder_response_v3.h
 *
 * An Ezsignfolder Object
 */

#ifndef _ezsignfolder_response_v3_H_
#define _ezsignfolder_response_v3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_response_v3_t ezsignfolder_response_v3_t;

#include "common_audit.h"
#include "computed_e_ezsignfolder_access.h"
#include "custom_ezsignfoldertype_response.h"
#include "field_e_ezsignfolder_completion.h"
#include "field_e_ezsignfolder_documentdependency.h"
#include "field_e_ezsignfolder_step.h"



typedef struct ezsignfolder_response_v3_t {
    int pki_ezsignfolder_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    struct custom_ezsignfoldertype_response_t *obj_ezsignfoldertype; //model
    int fki_timezone_id; //numeric
    ezmax_api_definition__full_field_e_ezsignfolder_completion__e e_ezsignfolder_completion; //referenced enum
    ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e e_ezsignfolder_documentdependency; //referenced enum
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
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step; //referenced enum
    char *dt_ezsignfolder_close; // string
    char *t_ezsignfolder_message; // string
    struct common_audit_t *obj_audit; //model
    char *s_ezsignfolder_externalid; // string
    ezmax_api_definition__full_computed_e_ezsignfolder_access__e e_ezsignfolder_access; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfolder_response_v3_t;

__attribute__((deprecated)) ezsignfolder_response_v3_t *ezsignfolder_response_v3_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    custom_ezsignfoldertype_response_t *obj_ezsignfoldertype,
    int fki_timezone_id,
    ezmax_api_definition__full_field_e_ezsignfolder_completion__e e_ezsignfolder_completion,
    ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e e_ezsignfolder_documentdependency,
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
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step,
    char *dt_ezsignfolder_close,
    char *t_ezsignfolder_message,
    common_audit_t *obj_audit,
    char *s_ezsignfolder_externalid,
    ezmax_api_definition__full_computed_e_ezsignfolder_access__e e_ezsignfolder_access
);

void ezsignfolder_response_v3_free(ezsignfolder_response_v3_t *ezsignfolder_response_v3);

ezsignfolder_response_v3_t *ezsignfolder_response_v3_parseFromJSON(cJSON *ezsignfolder_response_v3JSON);

cJSON *ezsignfolder_response_v3_convertToJSON(ezsignfolder_response_v3_t *ezsignfolder_response_v3);

#endif /* _ezsignfolder_response_v3_H_ */

