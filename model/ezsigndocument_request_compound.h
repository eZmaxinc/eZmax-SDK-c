/*
 * ezsigndocument_request_compound.h
 *
 * An Ezsigndocument Object and children to create a complete structure
 */

#ifndef _ezsigndocument_request_compound_H_
#define _ezsigndocument_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_request_compound_t ezsigndocument_request_compound_t;

#include "ezsigndocument_request.h"

// Enum EEZSIGNDOCUMENTSOURCE for ezsigndocument_request_compound

typedef enum  { ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTSOURCE_NULL = 0, ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTSOURCE_Base64, ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTSOURCE_Url } ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTSOURCE_e;

char* ezsigndocument_request_compound_e_ezsigndocument_source_ToString(ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTSOURCE_e e_ezsigndocument_source);

ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTSOURCE_e ezsigndocument_request_compound_e_ezsigndocument_source_FromString(char* e_ezsigndocument_source);

// Enum EEZSIGNDOCUMENTFORMAT for ezsigndocument_request_compound

typedef enum  { ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTFORMAT_NULL = 0, ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTFORMAT_Pdf } ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTFORMAT_e;

char* ezsigndocument_request_compound_e_ezsigndocument_format_ToString(ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTFORMAT_e e_ezsigndocument_format);

ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTFORMAT_e ezsigndocument_request_compound_e_ezsigndocument_format_FromString(char* e_ezsigndocument_format);



typedef struct ezsigndocument_request_compound_t {
    ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTSOURCE_e e_ezsigndocument_source; //enum
    ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTFORMAT_e e_ezsigndocument_format; //enum
    char *s_ezsigndocument_base64; // string
    char *s_ezsigndocument_base64; //ByteArray
    char *s_ezsigndocument_url; // string
    int b_ezsigndocument_forcerepair; //boolean
    char *s_ezsigndocument_password; // string
    int fki_ezsignfolder_id; //numeric
    char *dt_ezsigndocument_duedate; // string
    int fki_language_id; //numeric
    char *s_ezsigndocument_name; // string

} ezsigndocument_request_compound_t;

ezsigndocument_request_compound_t *ezsigndocument_request_compound_create(
    ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTSOURCE_e e_ezsigndocument_source,
    ezmax_api_definition_ezsigndocument_request_compound_EEZSIGNDOCUMENTFORMAT_e e_ezsigndocument_format,
    char *s_ezsigndocument_base64,
    char *s_ezsigndocument_base64,
    char *s_ezsigndocument_url,
    int b_ezsigndocument_forcerepair,
    char *s_ezsigndocument_password,
    int fki_ezsignfolder_id,
    char *dt_ezsigndocument_duedate,
    int fki_language_id,
    char *s_ezsigndocument_name
);

void ezsigndocument_request_compound_free(ezsigndocument_request_compound_t *ezsigndocument_request_compound);

ezsigndocument_request_compound_t *ezsigndocument_request_compound_parseFromJSON(cJSON *ezsigndocument_request_compoundJSON);

cJSON *ezsigndocument_request_compound_convertToJSON(ezsigndocument_request_compound_t *ezsigndocument_request_compound);

#endif /* _ezsigndocument_request_compound_H_ */

