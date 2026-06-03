/*
 * otherincome_list_element.h
 *
 * A Otherincome List Element
 */

#ifndef _otherincome_list_element_H_
#define _otherincome_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct otherincome_list_element_t otherincome_list_element_t;

#include "field_e_otherincome_remunerationtype.h"



typedef struct otherincome_list_element_t {
    int *pki_otherincome_id; //numeric
    int *fki_otherincometype_id; //numeric
    char *s_otherincometype_description_x; // string
    char *s_otherincome_description; // string
    ezmax_api_definition__full_field_e_otherincome_remunerationtype__e e_otherincome_remunerationtype; //referenced enum
    char *d_otherincome_remunerationsubtotal; // string
    char *d_otherincome_remunerationtaxes; // string
    char *d_otherincome_remunerationtotal; // string
    char *dt_otherincome_paid; // string
    int *b_otherincome_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} otherincome_list_element_t;

__attribute__((deprecated)) otherincome_list_element_t *otherincome_list_element_create(
    int *pki_otherincome_id,
    int *fki_otherincometype_id,
    char *s_otherincometype_description_x,
    char *s_otherincome_description,
    ezmax_api_definition__full_field_e_otherincome_remunerationtype__e e_otherincome_remunerationtype,
    char *d_otherincome_remunerationsubtotal,
    char *d_otherincome_remunerationtaxes,
    char *d_otherincome_remunerationtotal,
    char *dt_otherincome_paid,
    int *b_otherincome_isactive
);

void otherincome_list_element_free(otherincome_list_element_t *otherincome_list_element);

otherincome_list_element_t *otherincome_list_element_parseFromJSON(cJSON *otherincome_list_elementJSON);

cJSON *otherincome_list_element_convertToJSON(otherincome_list_element_t *otherincome_list_element);

#endif /* _otherincome_list_element_H_ */

