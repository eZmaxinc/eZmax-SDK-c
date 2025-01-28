/*
 * custom_dnsrecord_response.h
 *
 * A Custom Dnsrecord Object
 */

#ifndef _custom_dnsrecord_response_H_
#define _custom_dnsrecord_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_dnsrecord_response_t custom_dnsrecord_response_t;


// Enum EDNSRECORDTYPE for custom_dnsrecord_response

typedef enum  { ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDTYPE_NULL = 0, ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDTYPE_CNAME, ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDTYPE_MX, ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDTYPE_TXT } ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDTYPE_e;

char* custom_dnsrecord_response_e_dnsrecord_type_ToString(ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDTYPE_e e_dnsrecord_type);

ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDTYPE_e custom_dnsrecord_response_e_dnsrecord_type_FromString(char* e_dnsrecord_type);

// Enum EDNSRECORDVALIDATION for custom_dnsrecord_response

typedef enum  { ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDVALIDATION_NULL = 0, ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDVALIDATION_Match, ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDVALIDATION_Mismatch, ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDVALIDATION_NotFound } ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDVALIDATION_e;

char* custom_dnsrecord_response_e_dnsrecord_validation_ToString(ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDVALIDATION_e e_dnsrecord_validation);

ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDVALIDATION_e custom_dnsrecord_response_e_dnsrecord_validation_FromString(char* e_dnsrecord_validation);



typedef struct custom_dnsrecord_response_t {
    ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDTYPE_e e_dnsrecord_type; //enum
    ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDVALIDATION_e e_dnsrecord_validation; //enum
    char *s_dnsrecord_name; // string
    char *s_dnsrecord_value; // string
    char *s_dnsrecord_expectedvalue; // string
    int b_dnsrecord_must_match; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} custom_dnsrecord_response_t;

__attribute__((deprecated)) custom_dnsrecord_response_t *custom_dnsrecord_response_create(
    ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDTYPE_e e_dnsrecord_type,
    ezmax_api_definition__full_custom_dnsrecord_response_EDNSRECORDVALIDATION_e e_dnsrecord_validation,
    char *s_dnsrecord_name,
    char *s_dnsrecord_value,
    char *s_dnsrecord_expectedvalue,
    int b_dnsrecord_must_match
);

void custom_dnsrecord_response_free(custom_dnsrecord_response_t *custom_dnsrecord_response);

custom_dnsrecord_response_t *custom_dnsrecord_response_parseFromJSON(cJSON *custom_dnsrecord_responseJSON);

cJSON *custom_dnsrecord_response_convertToJSON(custom_dnsrecord_response_t *custom_dnsrecord_response);

#endif /* _custom_dnsrecord_response_H_ */

