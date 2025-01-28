/*
 * common_response_error_wrong_franchiseoffice.h
 *
 * Error Message when a Franchisebroker is not in this Franchiseoffice.
 */

#ifndef _common_response_error_wrong_franchiseoffice_H_
#define _common_response_error_wrong_franchiseoffice_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_response_error_wrong_franchiseoffice_t common_response_error_wrong_franchiseoffice_t;

#include "field_e_error_code.h"



typedef struct common_response_error_wrong_franchiseoffice_t {
    char *s_error_message; // string
    ezmax_api_definition__full_field_e_error_code__e e_error_code; //referenced enum
    list_t *a_s_error_messagedetail; //primitive container
    int fki_franchiseagence_id; //numeric
    char *s_franchiseagence_name; // string
    int fki_franchiseoffice_id; //numeric
    char *i_franchiseoffice_code; // string

    int _library_owned; // Is the library responsible for freeing this object?
} common_response_error_wrong_franchiseoffice_t;

__attribute__((deprecated)) common_response_error_wrong_franchiseoffice_t *common_response_error_wrong_franchiseoffice_create(
    char *s_error_message,
    ezmax_api_definition__full_field_e_error_code__e e_error_code,
    list_t *a_s_error_messagedetail,
    int fki_franchiseagence_id,
    char *s_franchiseagence_name,
    int fki_franchiseoffice_id,
    char *i_franchiseoffice_code
);

void common_response_error_wrong_franchiseoffice_free(common_response_error_wrong_franchiseoffice_t *common_response_error_wrong_franchiseoffice);

common_response_error_wrong_franchiseoffice_t *common_response_error_wrong_franchiseoffice_parseFromJSON(cJSON *common_response_error_wrong_franchiseofficeJSON);

cJSON *common_response_error_wrong_franchiseoffice_convertToJSON(common_response_error_wrong_franchiseoffice_t *common_response_error_wrong_franchiseoffice);

#endif /* _common_response_error_wrong_franchiseoffice_H_ */

