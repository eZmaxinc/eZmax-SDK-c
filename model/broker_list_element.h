/*
 * broker_list_element.h
 *
 * A Broker List Element
 */

#ifndef _broker_list_element_H_
#define _broker_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct broker_list_element_t broker_list_element_t;




typedef struct broker_list_element_t {
    int pki_broker_id; //numeric
    int fki_department_id; //numeric
    char *s_department_name_x; // string
    int fki_brokertype_id; //numeric
    char *s_brokertype_name_x; // string
    char *s_broker_code; // string
    char *s_realestateboardnumber_number; // string
    int i_agent_bannernumber; //numeric
    char *s_language_name_x; // string
    int i_broker_photocopiercode; //numeric
    int i_broker_longdistancecode; //numeric
    char *s_broker_name; // string
    char *s_broker_realestateassociationlicense; // string
    char *dt_broker_hiredate; // string
    char *dt_broker_leavedate; // string
    int b_broker_tranquillit; //boolean
    int b_broker_residentiallicense; //boolean
    int b_broker_commerciallicense; //boolean
    int b_broker_mortgagelicense; //boolean
    int b_broker_paidbyofficetranquillit; //boolean
    char *dt_broker_fintraccertification; // string
    int b_broker_isactive; //boolean
    char *s_contact_firstname; // string
    char *s_contact_lastname; // string
    char *dt_contact_birthdate; // string
    char *s_email_address; // string
    char *s_phone_e164; // string
    char *s_address_civic; // string
    char *s_address_street; // string
    char *s_address_suite; // string
    char *s_address_city; // string
    char *s_address_zip; // string
    char *s_province_name_x; // string
    char *s_country_name_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} broker_list_element_t;

__attribute__((deprecated)) broker_list_element_t *broker_list_element_create(
    int pki_broker_id,
    int fki_department_id,
    char *s_department_name_x,
    int fki_brokertype_id,
    char *s_brokertype_name_x,
    char *s_broker_code,
    char *s_realestateboardnumber_number,
    int i_agent_bannernumber,
    char *s_language_name_x,
    int i_broker_photocopiercode,
    int i_broker_longdistancecode,
    char *s_broker_name,
    char *s_broker_realestateassociationlicense,
    char *dt_broker_hiredate,
    char *dt_broker_leavedate,
    int b_broker_tranquillit,
    int b_broker_residentiallicense,
    int b_broker_commerciallicense,
    int b_broker_mortgagelicense,
    int b_broker_paidbyofficetranquillit,
    char *dt_broker_fintraccertification,
    int b_broker_isactive,
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *dt_contact_birthdate,
    char *s_email_address,
    char *s_phone_e164,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    char *s_address_zip,
    char *s_province_name_x,
    char *s_country_name_x
);

void broker_list_element_free(broker_list_element_t *broker_list_element);

broker_list_element_t *broker_list_element_parseFromJSON(cJSON *broker_list_elementJSON);

cJSON *broker_list_element_convertToJSON(broker_list_element_t *broker_list_element);

#endif /* _broker_list_element_H_ */

