/*
 * activesession_list_element.h
 *
 * A Activesession List Element
 */

#ifndef _activesession_list_element_H_
#define _activesession_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activesession_list_element_t activesession_list_element_t;




typedef struct activesession_list_element_t {
    int pki_activesession_id; //numeric
    int fki_user_id; //numeric
    int fki_computer_id; //numeric
    int fki_company_id; //numeric
    int fki_department_id; //numeric
    char *s_company_name_x; // string
    char *s_department_name_x; // string
    char *s_activesession_loginname; // string
    char *s_computer_description; // string
    char *dt_activesession_firsthit; // string
    char *dt_activesession_lasthit; // string
    char *s_activesession_ip; // string

    int _library_owned; // Is the library responsible for freeing this object?
} activesession_list_element_t;

__attribute__((deprecated)) activesession_list_element_t *activesession_list_element_create(
    int pki_activesession_id,
    int fki_user_id,
    int fki_computer_id,
    int fki_company_id,
    int fki_department_id,
    char *s_company_name_x,
    char *s_department_name_x,
    char *s_activesession_loginname,
    char *s_computer_description,
    char *dt_activesession_firsthit,
    char *dt_activesession_lasthit,
    char *s_activesession_ip
);

void activesession_list_element_free(activesession_list_element_t *activesession_list_element);

activesession_list_element_t *activesession_list_element_parseFromJSON(cJSON *activesession_list_elementJSON);

cJSON *activesession_list_element_convertToJSON(activesession_list_element_t *activesession_list_element);

#endif /* _activesession_list_element_H_ */

