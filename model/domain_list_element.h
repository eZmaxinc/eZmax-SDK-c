/*
 * domain_list_element.h
 *
 * A Domain List Element
 */

#ifndef _domain_list_element_H_
#define _domain_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_list_element_t domain_list_element_t;




typedef struct domain_list_element_t {
    int pki_domain_id; //numeric
    char *s_domain_name; // string

} domain_list_element_t;

domain_list_element_t *domain_list_element_create(
    int pki_domain_id,
    char *s_domain_name
);

void domain_list_element_free(domain_list_element_t *domain_list_element);

domain_list_element_t *domain_list_element_parseFromJSON(cJSON *domain_list_elementJSON);

cJSON *domain_list_element_convertToJSON(domain_list_element_t *domain_list_element);

#endif /* _domain_list_element_H_ */

