/*
 * officetaxreport_list_element.h
 *
 * A Officetaxreport List Element
 */

#ifndef _officetaxreport_list_element_H_
#define _officetaxreport_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct officetaxreport_list_element_t officetaxreport_list_element_t;




typedef struct officetaxreport_list_element_t {
    int *pki_officetaxreport_id; //numeric
    int *fki_period_id; //numeric
    char *s_period_yyyymm; // string
    char *dt_created_date; // string
    char *s_user_loginname; // string

    int _library_owned; // Is the library responsible for freeing this object?
} officetaxreport_list_element_t;

__attribute__((deprecated)) officetaxreport_list_element_t *officetaxreport_list_element_create(
    int *pki_officetaxreport_id,
    int *fki_period_id,
    char *s_period_yyyymm,
    char *dt_created_date,
    char *s_user_loginname
);

void officetaxreport_list_element_free(officetaxreport_list_element_t *officetaxreport_list_element);

officetaxreport_list_element_t *officetaxreport_list_element_parseFromJSON(cJSON *officetaxreport_list_elementJSON);

cJSON *officetaxreport_list_element_convertToJSON(officetaxreport_list_element_t *officetaxreport_list_element);

#endif /* _officetaxreport_list_element_H_ */

