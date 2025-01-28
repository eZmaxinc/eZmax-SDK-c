/*
 * ezsigndocumentlog_response.h
 *
 * An Ezsigndocumentlog Object
 */

#ifndef _ezsigndocumentlog_response_H_
#define _ezsigndocumentlog_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocumentlog_response_t ezsigndocumentlog_response_t;

#include "field_e_ezsigndocumentlog_type.h"



typedef struct ezsigndocumentlog_response_t {
    int fki_user_id; //numeric
    int fki_ezsignsigner_id; //numeric
    char *dt_ezsigndocumentlog_datetime; // string
    ezmax_api_definition__full_field_e_ezsigndocumentlog_type__e e_ezsigndocumentlog_type; //referenced enum
    char *s_ezsigndocumentlog_detail; // string
    char *s_ezsigndocumentlog_lastname; // string
    char *s_ezsigndocumentlog_firstname; // string
    char *s_ezsigndocumentlog_ip; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocumentlog_response_t;

__attribute__((deprecated)) ezsigndocumentlog_response_t *ezsigndocumentlog_response_create(
    int fki_user_id,
    int fki_ezsignsigner_id,
    char *dt_ezsigndocumentlog_datetime,
    ezmax_api_definition__full_field_e_ezsigndocumentlog_type__e e_ezsigndocumentlog_type,
    char *s_ezsigndocumentlog_detail,
    char *s_ezsigndocumentlog_lastname,
    char *s_ezsigndocumentlog_firstname,
    char *s_ezsigndocumentlog_ip
);

void ezsigndocumentlog_response_free(ezsigndocumentlog_response_t *ezsigndocumentlog_response);

ezsigndocumentlog_response_t *ezsigndocumentlog_response_parseFromJSON(cJSON *ezsigndocumentlog_responseJSON);

cJSON *ezsigndocumentlog_response_convertToJSON(ezsigndocumentlog_response_t *ezsigndocumentlog_response);

#endif /* _ezsigndocumentlog_response_H_ */

