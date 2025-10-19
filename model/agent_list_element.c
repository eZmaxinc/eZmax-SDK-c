#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agent_list_element.h"



static agent_list_element_t *agent_list_element_create_internal(
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
    ) {
    agent_list_element_t *agent_list_element_local_var = malloc(sizeof(agent_list_element_t));
    if (!agent_list_element_local_var) {
        return NULL;
    }
    agent_list_element_local_var->pki_agent_id = pki_agent_id;
    agent_list_element_local_var->fki_agenttype_id = fki_agenttype_id;
    agent_list_element_local_var->s_agenttype_name_x = s_agenttype_name_x;
    agent_list_element_local_var->fki_agentincorporation_id = fki_agentincorporation_id;
    agent_list_element_local_var->s_agentincorporation_name = s_agentincorporation_name;
    agent_list_element_local_var->fki_department_id = fki_department_id;
    agent_list_element_local_var->s_department_name_x = s_department_name_x;
    agent_list_element_local_var->fki_language_id = fki_language_id;
    agent_list_element_local_var->s_language_name_x = s_language_name_x;
    agent_list_element_local_var->s_realestateboardnumber_number = s_realestateboardnumber_number;
    agent_list_element_local_var->s_agent_code = s_agent_code;
    agent_list_element_local_var->i_agent_photocopiercode = i_agent_photocopiercode;
    agent_list_element_local_var->i_agent_longdistancecode = i_agent_longdistancecode;
    agent_list_element_local_var->i_agent_bannernumber = i_agent_bannernumber;
    agent_list_element_local_var->s_agent_realestateassociationlicense = s_agent_realestateassociationlicense;
    agent_list_element_local_var->dt_agent_hiredate = dt_agent_hiredate;
    agent_list_element_local_var->dt_agent_leavedate = dt_agent_leavedate;
    agent_list_element_local_var->b_agent_tranquillit = b_agent_tranquillit;
    agent_list_element_local_var->b_agent_residentiallicense = b_agent_residentiallicense;
    agent_list_element_local_var->b_agent_commerciallicense = b_agent_commerciallicense;
    agent_list_element_local_var->b_agent_mortgagelicense = b_agent_mortgagelicense;
    agent_list_element_local_var->b_agent_paidbyofficetranquillit = b_agent_paidbyofficetranquillit;
    agent_list_element_local_var->dt_agent_fintraccertification = dt_agent_fintraccertification;
    agent_list_element_local_var->b_agent_isactive = b_agent_isactive;
    agent_list_element_local_var->s_contact_firstname = s_contact_firstname;
    agent_list_element_local_var->s_contact_lastname = s_contact_lastname;
    agent_list_element_local_var->dt_contact_birthdate = dt_contact_birthdate;
    agent_list_element_local_var->s_email_address = s_email_address;
    agent_list_element_local_var->s_phone_e164 = s_phone_e164;
    agent_list_element_local_var->s_address_civic = s_address_civic;
    agent_list_element_local_var->s_address_street = s_address_street;
    agent_list_element_local_var->s_address_suite = s_address_suite;
    agent_list_element_local_var->s_address_city = s_address_city;
    agent_list_element_local_var->s_address_zip = s_address_zip;
    agent_list_element_local_var->s_province_name_x = s_province_name_x;
    agent_list_element_local_var->s_country_name_x = s_country_name_x;

    agent_list_element_local_var->_library_owned = 1;
    return agent_list_element_local_var;
}

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
    ) {
    return agent_list_element_create_internal (
        pki_agent_id,
        fki_agenttype_id,
        s_agenttype_name_x,
        fki_agentincorporation_id,
        s_agentincorporation_name,
        fki_department_id,
        s_department_name_x,
        fki_language_id,
        s_language_name_x,
        s_realestateboardnumber_number,
        s_agent_code,
        i_agent_photocopiercode,
        i_agent_longdistancecode,
        i_agent_bannernumber,
        s_agent_realestateassociationlicense,
        dt_agent_hiredate,
        dt_agent_leavedate,
        b_agent_tranquillit,
        b_agent_residentiallicense,
        b_agent_commerciallicense,
        b_agent_mortgagelicense,
        b_agent_paidbyofficetranquillit,
        dt_agent_fintraccertification,
        b_agent_isactive,
        s_contact_firstname,
        s_contact_lastname,
        dt_contact_birthdate,
        s_email_address,
        s_phone_e164,
        s_address_civic,
        s_address_street,
        s_address_suite,
        s_address_city,
        s_address_zip,
        s_province_name_x,
        s_country_name_x
        );
}

void agent_list_element_free(agent_list_element_t *agent_list_element) {
    if(NULL == agent_list_element){
        return ;
    }
    if(agent_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agent_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agent_list_element->s_agenttype_name_x) {
        free(agent_list_element->s_agenttype_name_x);
        agent_list_element->s_agenttype_name_x = NULL;
    }
    if (agent_list_element->s_agentincorporation_name) {
        free(agent_list_element->s_agentincorporation_name);
        agent_list_element->s_agentincorporation_name = NULL;
    }
    if (agent_list_element->s_department_name_x) {
        free(agent_list_element->s_department_name_x);
        agent_list_element->s_department_name_x = NULL;
    }
    if (agent_list_element->s_language_name_x) {
        free(agent_list_element->s_language_name_x);
        agent_list_element->s_language_name_x = NULL;
    }
    if (agent_list_element->s_realestateboardnumber_number) {
        free(agent_list_element->s_realestateboardnumber_number);
        agent_list_element->s_realestateboardnumber_number = NULL;
    }
    if (agent_list_element->s_agent_code) {
        free(agent_list_element->s_agent_code);
        agent_list_element->s_agent_code = NULL;
    }
    if (agent_list_element->s_agent_realestateassociationlicense) {
        free(agent_list_element->s_agent_realestateassociationlicense);
        agent_list_element->s_agent_realestateassociationlicense = NULL;
    }
    if (agent_list_element->dt_agent_hiredate) {
        free(agent_list_element->dt_agent_hiredate);
        agent_list_element->dt_agent_hiredate = NULL;
    }
    if (agent_list_element->dt_agent_leavedate) {
        free(agent_list_element->dt_agent_leavedate);
        agent_list_element->dt_agent_leavedate = NULL;
    }
    if (agent_list_element->dt_agent_fintraccertification) {
        free(agent_list_element->dt_agent_fintraccertification);
        agent_list_element->dt_agent_fintraccertification = NULL;
    }
    if (agent_list_element->s_contact_firstname) {
        free(agent_list_element->s_contact_firstname);
        agent_list_element->s_contact_firstname = NULL;
    }
    if (agent_list_element->s_contact_lastname) {
        free(agent_list_element->s_contact_lastname);
        agent_list_element->s_contact_lastname = NULL;
    }
    if (agent_list_element->dt_contact_birthdate) {
        free(agent_list_element->dt_contact_birthdate);
        agent_list_element->dt_contact_birthdate = NULL;
    }
    if (agent_list_element->s_email_address) {
        free(agent_list_element->s_email_address);
        agent_list_element->s_email_address = NULL;
    }
    if (agent_list_element->s_phone_e164) {
        free(agent_list_element->s_phone_e164);
        agent_list_element->s_phone_e164 = NULL;
    }
    if (agent_list_element->s_address_civic) {
        free(agent_list_element->s_address_civic);
        agent_list_element->s_address_civic = NULL;
    }
    if (agent_list_element->s_address_street) {
        free(agent_list_element->s_address_street);
        agent_list_element->s_address_street = NULL;
    }
    if (agent_list_element->s_address_suite) {
        free(agent_list_element->s_address_suite);
        agent_list_element->s_address_suite = NULL;
    }
    if (agent_list_element->s_address_city) {
        free(agent_list_element->s_address_city);
        agent_list_element->s_address_city = NULL;
    }
    if (agent_list_element->s_address_zip) {
        free(agent_list_element->s_address_zip);
        agent_list_element->s_address_zip = NULL;
    }
    if (agent_list_element->s_province_name_x) {
        free(agent_list_element->s_province_name_x);
        agent_list_element->s_province_name_x = NULL;
    }
    if (agent_list_element->s_country_name_x) {
        free(agent_list_element->s_country_name_x);
        agent_list_element->s_country_name_x = NULL;
    }
    free(agent_list_element);
}

cJSON *agent_list_element_convertToJSON(agent_list_element_t *agent_list_element) {
    cJSON *item = cJSON_CreateObject();

    // agent_list_element->pki_agent_id
    if (!agent_list_element->pki_agent_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiAgentID", agent_list_element->pki_agent_id) == NULL) {
    goto fail; //Numeric
    }


    // agent_list_element->fki_agenttype_id
    if (!agent_list_element->fki_agenttype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiAgenttypeID", agent_list_element->fki_agenttype_id) == NULL) {
    goto fail; //Numeric
    }


    // agent_list_element->s_agenttype_name_x
    if (!agent_list_element->s_agenttype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAgenttypeNameX", agent_list_element->s_agenttype_name_x) == NULL) {
    goto fail; //String
    }


    // agent_list_element->fki_agentincorporation_id
    if(agent_list_element->fki_agentincorporation_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentincorporationID", agent_list_element->fki_agentincorporation_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // agent_list_element->s_agentincorporation_name
    if(agent_list_element->s_agentincorporation_name) {
    if(cJSON_AddStringToObject(item, "sAgentincorporationName", agent_list_element->s_agentincorporation_name) == NULL) {
    goto fail; //String
    }
    }


    // agent_list_element->fki_department_id
    if (!agent_list_element->fki_department_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDepartmentID", agent_list_element->fki_department_id) == NULL) {
    goto fail; //Numeric
    }


    // agent_list_element->s_department_name_x
    if (!agent_list_element->s_department_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDepartmentNameX", agent_list_element->s_department_name_x) == NULL) {
    goto fail; //String
    }


    // agent_list_element->fki_language_id
    if (!agent_list_element->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", agent_list_element->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // agent_list_element->s_language_name_x
    if (!agent_list_element->s_language_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLanguageNameX", agent_list_element->s_language_name_x) == NULL) {
    goto fail; //String
    }


    // agent_list_element->s_realestateboardnumber_number
    if(agent_list_element->s_realestateboardnumber_number) {
    if(cJSON_AddStringToObject(item, "sRealestateboardnumberNumber", agent_list_element->s_realestateboardnumber_number) == NULL) {
    goto fail; //String
    }
    }


    // agent_list_element->s_agent_code
    if (!agent_list_element->s_agent_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAgentCode", agent_list_element->s_agent_code) == NULL) {
    goto fail; //String
    }


    // agent_list_element->i_agent_photocopiercode
    if (!agent_list_element->i_agent_photocopiercode) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iAgentPhotocopiercode", agent_list_element->i_agent_photocopiercode) == NULL) {
    goto fail; //Numeric
    }


    // agent_list_element->i_agent_longdistancecode
    if (!agent_list_element->i_agent_longdistancecode) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iAgentLongdistancecode", agent_list_element->i_agent_longdistancecode) == NULL) {
    goto fail; //Numeric
    }


    // agent_list_element->i_agent_bannernumber
    if (!agent_list_element->i_agent_bannernumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iAgentBannernumber", agent_list_element->i_agent_bannernumber) == NULL) {
    goto fail; //Numeric
    }


    // agent_list_element->s_agent_realestateassociationlicense
    if (!agent_list_element->s_agent_realestateassociationlicense) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAgentRealestateassociationlicense", agent_list_element->s_agent_realestateassociationlicense) == NULL) {
    goto fail; //String
    }


    // agent_list_element->dt_agent_hiredate
    if(agent_list_element->dt_agent_hiredate) {
    if(cJSON_AddStringToObject(item, "dtAgentHiredate", agent_list_element->dt_agent_hiredate) == NULL) {
    goto fail; //String
    }
    }


    // agent_list_element->dt_agent_leavedate
    if(agent_list_element->dt_agent_leavedate) {
    if(cJSON_AddStringToObject(item, "dtAgentLeavedate", agent_list_element->dt_agent_leavedate) == NULL) {
    goto fail; //String
    }
    }


    // agent_list_element->b_agent_tranquillit
    if (!agent_list_element->b_agent_tranquillit) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bAgentTranquillit", agent_list_element->b_agent_tranquillit) == NULL) {
    goto fail; //Bool
    }


    // agent_list_element->b_agent_residentiallicense
    if (!agent_list_element->b_agent_residentiallicense) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bAgentResidentiallicense", agent_list_element->b_agent_residentiallicense) == NULL) {
    goto fail; //Bool
    }


    // agent_list_element->b_agent_commerciallicense
    if (!agent_list_element->b_agent_commerciallicense) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bAgentCommerciallicense", agent_list_element->b_agent_commerciallicense) == NULL) {
    goto fail; //Bool
    }


    // agent_list_element->b_agent_mortgagelicense
    if (!agent_list_element->b_agent_mortgagelicense) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bAgentMortgagelicense", agent_list_element->b_agent_mortgagelicense) == NULL) {
    goto fail; //Bool
    }


    // agent_list_element->b_agent_paidbyofficetranquillit
    if (!agent_list_element->b_agent_paidbyofficetranquillit) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bAgentPaidbyofficetranquillit", agent_list_element->b_agent_paidbyofficetranquillit) == NULL) {
    goto fail; //Bool
    }


    // agent_list_element->dt_agent_fintraccertification
    if(agent_list_element->dt_agent_fintraccertification) {
    if(cJSON_AddStringToObject(item, "dtAgentFintraccertification", agent_list_element->dt_agent_fintraccertification) == NULL) {
    goto fail; //String
    }
    }


    // agent_list_element->b_agent_isactive
    if (!agent_list_element->b_agent_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bAgentIsactive", agent_list_element->b_agent_isactive) == NULL) {
    goto fail; //Bool
    }


    // agent_list_element->s_contact_firstname
    if (!agent_list_element->s_contact_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactFirstname", agent_list_element->s_contact_firstname) == NULL) {
    goto fail; //String
    }


    // agent_list_element->s_contact_lastname
    if (!agent_list_element->s_contact_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sContactLastname", agent_list_element->s_contact_lastname) == NULL) {
    goto fail; //String
    }


    // agent_list_element->dt_contact_birthdate
    if(agent_list_element->dt_contact_birthdate) {
    if(cJSON_AddStringToObject(item, "dtContactBirthdate", agent_list_element->dt_contact_birthdate) == NULL) {
    goto fail; //String
    }
    }


    // agent_list_element->s_email_address
    if(agent_list_element->s_email_address) {
    if(cJSON_AddStringToObject(item, "sEmailAddress", agent_list_element->s_email_address) == NULL) {
    goto fail; //String
    }
    }


    // agent_list_element->s_phone_e164
    if(agent_list_element->s_phone_e164) {
    if(cJSON_AddStringToObject(item, "sPhoneE164", agent_list_element->s_phone_e164) == NULL) {
    goto fail; //String
    }
    }


    // agent_list_element->s_address_civic
    if(agent_list_element->s_address_civic) {
    if(cJSON_AddStringToObject(item, "sAddressCivic", agent_list_element->s_address_civic) == NULL) {
    goto fail; //String
    }
    }


    // agent_list_element->s_address_street
    if(agent_list_element->s_address_street) {
    if(cJSON_AddStringToObject(item, "sAddressStreet", agent_list_element->s_address_street) == NULL) {
    goto fail; //String
    }
    }


    // agent_list_element->s_address_suite
    if(agent_list_element->s_address_suite) {
    if(cJSON_AddStringToObject(item, "sAddressSuite", agent_list_element->s_address_suite) == NULL) {
    goto fail; //String
    }
    }


    // agent_list_element->s_address_city
    if(agent_list_element->s_address_city) {
    if(cJSON_AddStringToObject(item, "sAddressCity", agent_list_element->s_address_city) == NULL) {
    goto fail; //String
    }
    }


    // agent_list_element->s_address_zip
    if(agent_list_element->s_address_zip) {
    if(cJSON_AddStringToObject(item, "sAddressZip", agent_list_element->s_address_zip) == NULL) {
    goto fail; //String
    }
    }


    // agent_list_element->s_province_name_x
    if(agent_list_element->s_province_name_x) {
    if(cJSON_AddStringToObject(item, "sProvinceNameX", agent_list_element->s_province_name_x) == NULL) {
    goto fail; //String
    }
    }


    // agent_list_element->s_country_name_x
    if(agent_list_element->s_country_name_x) {
    if(cJSON_AddStringToObject(item, "sCountryNameX", agent_list_element->s_country_name_x) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

agent_list_element_t *agent_list_element_parseFromJSON(cJSON *agent_list_elementJSON){

    agent_list_element_t *agent_list_element_local_var = NULL;

    // agent_list_element->pki_agent_id
    cJSON *pki_agent_id = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "pkiAgentID");
    if (cJSON_IsNull(pki_agent_id)) {
        pki_agent_id = NULL;
    }
    if (!pki_agent_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_agent_id))
    {
    goto end; //Numeric
    }

    // agent_list_element->fki_agenttype_id
    cJSON *fki_agenttype_id = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "fkiAgenttypeID");
    if (cJSON_IsNull(fki_agenttype_id)) {
        fki_agenttype_id = NULL;
    }
    if (!fki_agenttype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_agenttype_id))
    {
    goto end; //Numeric
    }

    // agent_list_element->s_agenttype_name_x
    cJSON *s_agenttype_name_x = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "sAgenttypeNameX");
    if (cJSON_IsNull(s_agenttype_name_x)) {
        s_agenttype_name_x = NULL;
    }
    if (!s_agenttype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_agenttype_name_x))
    {
    goto end; //String
    }

    // agent_list_element->fki_agentincorporation_id
    cJSON *fki_agentincorporation_id = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "fkiAgentincorporationID");
    if (cJSON_IsNull(fki_agentincorporation_id)) {
        fki_agentincorporation_id = NULL;
    }
    if (fki_agentincorporation_id) { 
    if(!cJSON_IsNumber(fki_agentincorporation_id))
    {
    goto end; //Numeric
    }
    }

    // agent_list_element->s_agentincorporation_name
    cJSON *s_agentincorporation_name = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "sAgentincorporationName");
    if (cJSON_IsNull(s_agentincorporation_name)) {
        s_agentincorporation_name = NULL;
    }
    if (s_agentincorporation_name) { 
    if(!cJSON_IsString(s_agentincorporation_name) && !cJSON_IsNull(s_agentincorporation_name))
    {
    goto end; //String
    }
    }

    // agent_list_element->fki_department_id
    cJSON *fki_department_id = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "fkiDepartmentID");
    if (cJSON_IsNull(fki_department_id)) {
        fki_department_id = NULL;
    }
    if (!fki_department_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_department_id))
    {
    goto end; //Numeric
    }

    // agent_list_element->s_department_name_x
    cJSON *s_department_name_x = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "sDepartmentNameX");
    if (cJSON_IsNull(s_department_name_x)) {
        s_department_name_x = NULL;
    }
    if (!s_department_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_department_name_x))
    {
    goto end; //String
    }

    // agent_list_element->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "fkiLanguageID");
    if (cJSON_IsNull(fki_language_id)) {
        fki_language_id = NULL;
    }
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // agent_list_element->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "sLanguageNameX");
    if (cJSON_IsNull(s_language_name_x)) {
        s_language_name_x = NULL;
    }
    if (!s_language_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_language_name_x))
    {
    goto end; //String
    }

    // agent_list_element->s_realestateboardnumber_number
    cJSON *s_realestateboardnumber_number = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "sRealestateboardnumberNumber");
    if (cJSON_IsNull(s_realestateboardnumber_number)) {
        s_realestateboardnumber_number = NULL;
    }
    if (s_realestateboardnumber_number) { 
    if(!cJSON_IsString(s_realestateboardnumber_number) && !cJSON_IsNull(s_realestateboardnumber_number))
    {
    goto end; //String
    }
    }

    // agent_list_element->s_agent_code
    cJSON *s_agent_code = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "sAgentCode");
    if (cJSON_IsNull(s_agent_code)) {
        s_agent_code = NULL;
    }
    if (!s_agent_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_agent_code))
    {
    goto end; //String
    }

    // agent_list_element->i_agent_photocopiercode
    cJSON *i_agent_photocopiercode = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "iAgentPhotocopiercode");
    if (cJSON_IsNull(i_agent_photocopiercode)) {
        i_agent_photocopiercode = NULL;
    }
    if (!i_agent_photocopiercode) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_agent_photocopiercode))
    {
    goto end; //Numeric
    }

    // agent_list_element->i_agent_longdistancecode
    cJSON *i_agent_longdistancecode = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "iAgentLongdistancecode");
    if (cJSON_IsNull(i_agent_longdistancecode)) {
        i_agent_longdistancecode = NULL;
    }
    if (!i_agent_longdistancecode) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_agent_longdistancecode))
    {
    goto end; //Numeric
    }

    // agent_list_element->i_agent_bannernumber
    cJSON *i_agent_bannernumber = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "iAgentBannernumber");
    if (cJSON_IsNull(i_agent_bannernumber)) {
        i_agent_bannernumber = NULL;
    }
    if (!i_agent_bannernumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_agent_bannernumber))
    {
    goto end; //Numeric
    }

    // agent_list_element->s_agent_realestateassociationlicense
    cJSON *s_agent_realestateassociationlicense = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "sAgentRealestateassociationlicense");
    if (cJSON_IsNull(s_agent_realestateassociationlicense)) {
        s_agent_realestateassociationlicense = NULL;
    }
    if (!s_agent_realestateassociationlicense) {
        goto end;
    }

    
    if(!cJSON_IsString(s_agent_realestateassociationlicense))
    {
    goto end; //String
    }

    // agent_list_element->dt_agent_hiredate
    cJSON *dt_agent_hiredate = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "dtAgentHiredate");
    if (cJSON_IsNull(dt_agent_hiredate)) {
        dt_agent_hiredate = NULL;
    }
    if (dt_agent_hiredate) { 
    if(!cJSON_IsString(dt_agent_hiredate) && !cJSON_IsNull(dt_agent_hiredate))
    {
    goto end; //String
    }
    }

    // agent_list_element->dt_agent_leavedate
    cJSON *dt_agent_leavedate = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "dtAgentLeavedate");
    if (cJSON_IsNull(dt_agent_leavedate)) {
        dt_agent_leavedate = NULL;
    }
    if (dt_agent_leavedate) { 
    if(!cJSON_IsString(dt_agent_leavedate) && !cJSON_IsNull(dt_agent_leavedate))
    {
    goto end; //String
    }
    }

    // agent_list_element->b_agent_tranquillit
    cJSON *b_agent_tranquillit = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "bAgentTranquillit");
    if (cJSON_IsNull(b_agent_tranquillit)) {
        b_agent_tranquillit = NULL;
    }
    if (!b_agent_tranquillit) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_agent_tranquillit))
    {
    goto end; //Bool
    }

    // agent_list_element->b_agent_residentiallicense
    cJSON *b_agent_residentiallicense = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "bAgentResidentiallicense");
    if (cJSON_IsNull(b_agent_residentiallicense)) {
        b_agent_residentiallicense = NULL;
    }
    if (!b_agent_residentiallicense) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_agent_residentiallicense))
    {
    goto end; //Bool
    }

    // agent_list_element->b_agent_commerciallicense
    cJSON *b_agent_commerciallicense = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "bAgentCommerciallicense");
    if (cJSON_IsNull(b_agent_commerciallicense)) {
        b_agent_commerciallicense = NULL;
    }
    if (!b_agent_commerciallicense) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_agent_commerciallicense))
    {
    goto end; //Bool
    }

    // agent_list_element->b_agent_mortgagelicense
    cJSON *b_agent_mortgagelicense = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "bAgentMortgagelicense");
    if (cJSON_IsNull(b_agent_mortgagelicense)) {
        b_agent_mortgagelicense = NULL;
    }
    if (!b_agent_mortgagelicense) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_agent_mortgagelicense))
    {
    goto end; //Bool
    }

    // agent_list_element->b_agent_paidbyofficetranquillit
    cJSON *b_agent_paidbyofficetranquillit = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "bAgentPaidbyofficetranquillit");
    if (cJSON_IsNull(b_agent_paidbyofficetranquillit)) {
        b_agent_paidbyofficetranquillit = NULL;
    }
    if (!b_agent_paidbyofficetranquillit) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_agent_paidbyofficetranquillit))
    {
    goto end; //Bool
    }

    // agent_list_element->dt_agent_fintraccertification
    cJSON *dt_agent_fintraccertification = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "dtAgentFintraccertification");
    if (cJSON_IsNull(dt_agent_fintraccertification)) {
        dt_agent_fintraccertification = NULL;
    }
    if (dt_agent_fintraccertification) { 
    if(!cJSON_IsString(dt_agent_fintraccertification) && !cJSON_IsNull(dt_agent_fintraccertification))
    {
    goto end; //String
    }
    }

    // agent_list_element->b_agent_isactive
    cJSON *b_agent_isactive = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "bAgentIsactive");
    if (cJSON_IsNull(b_agent_isactive)) {
        b_agent_isactive = NULL;
    }
    if (!b_agent_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_agent_isactive))
    {
    goto end; //Bool
    }

    // agent_list_element->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "sContactFirstname");
    if (cJSON_IsNull(s_contact_firstname)) {
        s_contact_firstname = NULL;
    }
    if (!s_contact_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_firstname))
    {
    goto end; //String
    }

    // agent_list_element->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "sContactLastname");
    if (cJSON_IsNull(s_contact_lastname)) {
        s_contact_lastname = NULL;
    }
    if (!s_contact_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_contact_lastname))
    {
    goto end; //String
    }

    // agent_list_element->dt_contact_birthdate
    cJSON *dt_contact_birthdate = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "dtContactBirthdate");
    if (cJSON_IsNull(dt_contact_birthdate)) {
        dt_contact_birthdate = NULL;
    }
    if (dt_contact_birthdate) { 
    if(!cJSON_IsString(dt_contact_birthdate) && !cJSON_IsNull(dt_contact_birthdate))
    {
    goto end; //String
    }
    }

    // agent_list_element->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "sEmailAddress");
    if (cJSON_IsNull(s_email_address)) {
        s_email_address = NULL;
    }
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address) && !cJSON_IsNull(s_email_address))
    {
    goto end; //String
    }
    }

    // agent_list_element->s_phone_e164
    cJSON *s_phone_e164 = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "sPhoneE164");
    if (cJSON_IsNull(s_phone_e164)) {
        s_phone_e164 = NULL;
    }
    if (s_phone_e164) { 
    if(!cJSON_IsString(s_phone_e164) && !cJSON_IsNull(s_phone_e164))
    {
    goto end; //String
    }
    }

    // agent_list_element->s_address_civic
    cJSON *s_address_civic = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "sAddressCivic");
    if (cJSON_IsNull(s_address_civic)) {
        s_address_civic = NULL;
    }
    if (s_address_civic) { 
    if(!cJSON_IsString(s_address_civic) && !cJSON_IsNull(s_address_civic))
    {
    goto end; //String
    }
    }

    // agent_list_element->s_address_street
    cJSON *s_address_street = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "sAddressStreet");
    if (cJSON_IsNull(s_address_street)) {
        s_address_street = NULL;
    }
    if (s_address_street) { 
    if(!cJSON_IsString(s_address_street) && !cJSON_IsNull(s_address_street))
    {
    goto end; //String
    }
    }

    // agent_list_element->s_address_suite
    cJSON *s_address_suite = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "sAddressSuite");
    if (cJSON_IsNull(s_address_suite)) {
        s_address_suite = NULL;
    }
    if (s_address_suite) { 
    if(!cJSON_IsString(s_address_suite) && !cJSON_IsNull(s_address_suite))
    {
    goto end; //String
    }
    }

    // agent_list_element->s_address_city
    cJSON *s_address_city = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "sAddressCity");
    if (cJSON_IsNull(s_address_city)) {
        s_address_city = NULL;
    }
    if (s_address_city) { 
    if(!cJSON_IsString(s_address_city) && !cJSON_IsNull(s_address_city))
    {
    goto end; //String
    }
    }

    // agent_list_element->s_address_zip
    cJSON *s_address_zip = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "sAddressZip");
    if (cJSON_IsNull(s_address_zip)) {
        s_address_zip = NULL;
    }
    if (s_address_zip) { 
    if(!cJSON_IsString(s_address_zip) && !cJSON_IsNull(s_address_zip))
    {
    goto end; //String
    }
    }

    // agent_list_element->s_province_name_x
    cJSON *s_province_name_x = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "sProvinceNameX");
    if (cJSON_IsNull(s_province_name_x)) {
        s_province_name_x = NULL;
    }
    if (s_province_name_x) { 
    if(!cJSON_IsString(s_province_name_x) && !cJSON_IsNull(s_province_name_x))
    {
    goto end; //String
    }
    }

    // agent_list_element->s_country_name_x
    cJSON *s_country_name_x = cJSON_GetObjectItemCaseSensitive(agent_list_elementJSON, "sCountryNameX");
    if (cJSON_IsNull(s_country_name_x)) {
        s_country_name_x = NULL;
    }
    if (s_country_name_x) { 
    if(!cJSON_IsString(s_country_name_x) && !cJSON_IsNull(s_country_name_x))
    {
    goto end; //String
    }
    }


    agent_list_element_local_var = agent_list_element_create_internal (
        pki_agent_id->valuedouble,
        fki_agenttype_id->valuedouble,
        strdup(s_agenttype_name_x->valuestring),
        fki_agentincorporation_id ? fki_agentincorporation_id->valuedouble : 0,
        s_agentincorporation_name && !cJSON_IsNull(s_agentincorporation_name) ? strdup(s_agentincorporation_name->valuestring) : NULL,
        fki_department_id->valuedouble,
        strdup(s_department_name_x->valuestring),
        fki_language_id->valuedouble,
        strdup(s_language_name_x->valuestring),
        s_realestateboardnumber_number && !cJSON_IsNull(s_realestateboardnumber_number) ? strdup(s_realestateboardnumber_number->valuestring) : NULL,
        strdup(s_agent_code->valuestring),
        i_agent_photocopiercode->valuedouble,
        i_agent_longdistancecode->valuedouble,
        i_agent_bannernumber->valuedouble,
        strdup(s_agent_realestateassociationlicense->valuestring),
        dt_agent_hiredate && !cJSON_IsNull(dt_agent_hiredate) ? strdup(dt_agent_hiredate->valuestring) : NULL,
        dt_agent_leavedate && !cJSON_IsNull(dt_agent_leavedate) ? strdup(dt_agent_leavedate->valuestring) : NULL,
        b_agent_tranquillit->valueint,
        b_agent_residentiallicense->valueint,
        b_agent_commerciallicense->valueint,
        b_agent_mortgagelicense->valueint,
        b_agent_paidbyofficetranquillit->valueint,
        dt_agent_fintraccertification && !cJSON_IsNull(dt_agent_fintraccertification) ? strdup(dt_agent_fintraccertification->valuestring) : NULL,
        b_agent_isactive->valueint,
        strdup(s_contact_firstname->valuestring),
        strdup(s_contact_lastname->valuestring),
        dt_contact_birthdate && !cJSON_IsNull(dt_contact_birthdate) ? strdup(dt_contact_birthdate->valuestring) : NULL,
        s_email_address && !cJSON_IsNull(s_email_address) ? strdup(s_email_address->valuestring) : NULL,
        s_phone_e164 && !cJSON_IsNull(s_phone_e164) ? strdup(s_phone_e164->valuestring) : NULL,
        s_address_civic && !cJSON_IsNull(s_address_civic) ? strdup(s_address_civic->valuestring) : NULL,
        s_address_street && !cJSON_IsNull(s_address_street) ? strdup(s_address_street->valuestring) : NULL,
        s_address_suite && !cJSON_IsNull(s_address_suite) ? strdup(s_address_suite->valuestring) : NULL,
        s_address_city && !cJSON_IsNull(s_address_city) ? strdup(s_address_city->valuestring) : NULL,
        s_address_zip && !cJSON_IsNull(s_address_zip) ? strdup(s_address_zip->valuestring) : NULL,
        s_province_name_x && !cJSON_IsNull(s_province_name_x) ? strdup(s_province_name_x->valuestring) : NULL,
        s_country_name_x && !cJSON_IsNull(s_country_name_x) ? strdup(s_country_name_x->valuestring) : NULL
        );

    return agent_list_element_local_var;
end:
    return NULL;

}
