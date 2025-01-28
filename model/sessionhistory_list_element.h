/*
 * sessionhistory_list_element.h
 *
 * A Sessionhistory List Element
 */

#ifndef _sessionhistory_list_element_H_
#define _sessionhistory_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sessionhistory_list_element_t sessionhistory_list_element_t;

#include "field_e_sessionhistory_endby.h"



typedef struct sessionhistory_list_element_t {
    int pki_sessionhistory_id; //numeric
    int fki_computer_id; //numeric
    int fki_user_id; //numeric
    char *dt_sessionhistory_firsthit; // string
    char *dt_sessionhistory_lasthit; // string
    ezmax_api_definition__full_field_e_sessionhistory_endby__e e_sessionhistory_endby; //referenced enum
    char *s_computer_description; // string
    char *s_sessionhistory_duration; // string
    char *s_sessionhistory_ip; // string
    char *s_user_loginname; // string

    int _library_owned; // Is the library responsible for freeing this object?
} sessionhistory_list_element_t;

__attribute__((deprecated)) sessionhistory_list_element_t *sessionhistory_list_element_create(
    int pki_sessionhistory_id,
    int fki_computer_id,
    int fki_user_id,
    char *dt_sessionhistory_firsthit,
    char *dt_sessionhistory_lasthit,
    ezmax_api_definition__full_field_e_sessionhistory_endby__e e_sessionhistory_endby,
    char *s_computer_description,
    char *s_sessionhistory_duration,
    char *s_sessionhistory_ip,
    char *s_user_loginname
);

void sessionhistory_list_element_free(sessionhistory_list_element_t *sessionhistory_list_element);

sessionhistory_list_element_t *sessionhistory_list_element_parseFromJSON(cJSON *sessionhistory_list_elementJSON);

cJSON *sessionhistory_list_element_convertToJSON(sessionhistory_list_element_t *sessionhistory_list_element);

#endif /* _sessionhistory_list_element_H_ */

