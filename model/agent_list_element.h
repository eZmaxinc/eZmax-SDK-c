/*
 * agent_list_element.h
 *
 * A Agent List Element
 */

#ifndef _agent_list_element_H_
#define _agent_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agent_list_element_t agent_list_element_t;




typedef struct agent_list_element_t {
    int pki_agent_id; //numeric
    int fki_agenttype_id; //numeric
    char *s_agenttype_name_x; // string
    int fki_agentincorporation_id; //numeric
    char *s_agentincorporation_name; // string
    int fki_department_id; //numeric
    char *s_department_name_x; // string
    int fki_language_id; //numeric
    char *s_language_name_x; // string
    char *s_realestateboardnumber_number; // string
    char *s_agent_code; // string
    int i_agent_photocopiercode; //numeric
    int i_agent_longdistancecode; //numeric
    int i_agent_bannernumber; //numeric
    char *s_agent_realestateassociationlicense; // string
    char *dt_agent_hiredate; // string
    char *dt_agent_leavedate; // string
    int b_agent_tranquillit; //boolean
    int b_agent_residentiallicense; //boolean
    int b_agent_commerciallicense; //boolean
    int b_agent_mortgagelicense; //boolean
    int b_agent_paidbyofficetranquillit; //boolean
    char *dt_agent_fintraccertification; // string
    int b_agent_isactive; //boolean
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
} agent_list_element_t;

__attribute__((deprecated)) agent_list_element_t *agent_list_element_create(
    int pki_agent_id,
    int fki_agenttype_id,
    char *s_agenttype_name_x,
    int fki_agentincorporation_id,
    char *s_agentincorporation_name,
    int fki_department_id,
    char *s_department_name_x,
    int fki_language_id,
    char *s_language_name_x,
    char *s_realestateboardnumber_number,
    char *s_agent_code,
    int i_agent_photocopiercode,
    int i_agent_longdistancecode,
    int i_agent_bannernumber,
    char *s_agent_realestateassociationlicense,
    char *dt_agent_hiredate,
    char *dt_agent_leavedate,
    int b_agent_tranquillit,
    int b_agent_residentiallicense,
    int b_agent_commerciallicense,
    int b_agent_mortgagelicense,
    int b_agent_paidbyofficetranquillit,
    char *dt_agent_fintraccertification,
    int b_agent_isactive,
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

void agent_list_element_free(agent_list_element_t *agent_list_element);

agent_list_element_t *agent_list_element_parseFromJSON(cJSON *agent_list_elementJSON);

cJSON *agent_list_element_convertToJSON(agent_list_element_t *agent_list_element);

#endif /* _agent_list_element_H_ */

