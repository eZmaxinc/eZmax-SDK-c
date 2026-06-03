/*
 * employee_list_element.h
 *
 * A Employee List Element
 */

#ifndef _employee_list_element_H_
#define _employee_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employee_list_element_t employee_list_element_t;




typedef struct employee_list_element_t {
    int *pki_employee_id; //numeric
    int *fki_department_id; //numeric
    char *s_employee_code; // string
    char *s_employee_internalcode; // string
    int *b_employee_isactive; //boolean
    char *dt_employee_hiredate; // string
    char *dt_employee_leavedate; // string
    char *s_department_name_x; // string
    char *s_contact_firstname; // string
    char *s_contact_lastname; // string
    char *s_phone_e164; // string
    char *s_email_address; // string
    char *s_address_civic; // string
    char *s_address_street; // string
    char *s_address_suite; // string
    char *s_address_city; // string
    char *s_address_zip; // string
    int *fki_province_id; //numeric
    char *s_province_name_x; // string
    int *fki_country_id; //numeric
    char *s_country_name_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} employee_list_element_t;

__attribute__((deprecated)) employee_list_element_t *employee_list_element_create(
    int *pki_employee_id,
    int *fki_department_id,
    char *s_employee_code,
    char *s_employee_internalcode,
    int *b_employee_isactive,
    char *dt_employee_hiredate,
    char *dt_employee_leavedate,
    char *s_department_name_x,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_phone_e164,
    char *s_email_address,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    char *s_address_zip,
    int *fki_province_id,
    char *s_province_name_x,
    int *fki_country_id,
    char *s_country_name_x
);

void employee_list_element_free(employee_list_element_t *employee_list_element);

employee_list_element_t *employee_list_element_parseFromJSON(cJSON *employee_list_elementJSON);

cJSON *employee_list_element_convertToJSON(employee_list_element_t *employee_list_element);

#endif /* _employee_list_element_H_ */

