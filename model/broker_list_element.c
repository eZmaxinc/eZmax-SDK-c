#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "broker_list_element.h"



static broker_list_element_t *broker_list_element_create_internal(
    int *pki_broker_id,
    int *fki_department_id,
    char *s_department_name_x,
    int *fki_brokertype_id,
    char *s_brokertype_name_x,
    char *s_broker_code,
    char *s_realestateboardnumber_number,
    int *i_agent_bannernumber,
    char *s_language_name_x,
    int *i_broker_photocopiercode,
    int *i_broker_longdistancecode,
    char *s_broker_name,
    char *s_broker_realestateassociationlicense,
    char *dt_broker_hiredate,
    char *dt_broker_leavedate,
    int *b_broker_tranquillit,
    int *b_broker_residentiallicense,
    int *b_broker_commerciallicense,
    int *b_broker_mortgagelicense,
    int *b_broker_paidbyofficetranquillit,
    char *dt_broker_fintraccertification,
    int *b_broker_isactive,
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
    int *fki_province_id,
    char *s_province_name_x,
    int *fki_country_id,
    char *s_country_name_x
    ) {
    broker_list_element_t *broker_list_element_local_var = malloc(sizeof(broker_list_element_t));
    if (!broker_list_element_local_var) {
        return NULL;
    }
    memset(broker_list_element_local_var, 0, sizeof(broker_list_element_t));
    broker_list_element_local_var->_library_owned = 1;
    broker_list_element_local_var->pki_broker_id = pki_broker_id;
    broker_list_element_local_var->fki_department_id = fki_department_id;
    broker_list_element_local_var->s_department_name_x = s_department_name_x;
    broker_list_element_local_var->fki_brokertype_id = fki_brokertype_id;
    broker_list_element_local_var->s_brokertype_name_x = s_brokertype_name_x;
    broker_list_element_local_var->s_broker_code = s_broker_code;
    broker_list_element_local_var->s_realestateboardnumber_number = s_realestateboardnumber_number;
    broker_list_element_local_var->i_agent_bannernumber = i_agent_bannernumber;
    broker_list_element_local_var->s_language_name_x = s_language_name_x;
    broker_list_element_local_var->i_broker_photocopiercode = i_broker_photocopiercode;
    broker_list_element_local_var->i_broker_longdistancecode = i_broker_longdistancecode;
    broker_list_element_local_var->s_broker_name = s_broker_name;
    broker_list_element_local_var->s_broker_realestateassociationlicense = s_broker_realestateassociationlicense;
    broker_list_element_local_var->dt_broker_hiredate = dt_broker_hiredate;
    broker_list_element_local_var->dt_broker_leavedate = dt_broker_leavedate;
    broker_list_element_local_var->b_broker_tranquillit = b_broker_tranquillit;
    broker_list_element_local_var->b_broker_residentiallicense = b_broker_residentiallicense;
    broker_list_element_local_var->b_broker_commerciallicense = b_broker_commerciallicense;
    broker_list_element_local_var->b_broker_mortgagelicense = b_broker_mortgagelicense;
    broker_list_element_local_var->b_broker_paidbyofficetranquillit = b_broker_paidbyofficetranquillit;
    broker_list_element_local_var->dt_broker_fintraccertification = dt_broker_fintraccertification;
    broker_list_element_local_var->b_broker_isactive = b_broker_isactive;
    broker_list_element_local_var->s_contact_firstname = s_contact_firstname;
    broker_list_element_local_var->s_contact_lastname = s_contact_lastname;
    broker_list_element_local_var->dt_contact_birthdate = dt_contact_birthdate;
    broker_list_element_local_var->s_email_address = s_email_address;
    broker_list_element_local_var->s_phone_e164 = s_phone_e164;
    broker_list_element_local_var->s_address_civic = s_address_civic;
    broker_list_element_local_var->s_address_street = s_address_street;
    broker_list_element_local_var->s_address_suite = s_address_suite;
    broker_list_element_local_var->s_address_city = s_address_city;
    broker_list_element_local_var->s_address_zip = s_address_zip;
    broker_list_element_local_var->fki_province_id = fki_province_id;
    broker_list_element_local_var->s_province_name_x = s_province_name_x;
    broker_list_element_local_var->fki_country_id = fki_country_id;
    broker_list_element_local_var->s_country_name_x = s_country_name_x;
    return broker_list_element_local_var;
}

__attribute__((deprecated)) broker_list_element_t *broker_list_element_create(
    int *pki_broker_id,
    int *fki_department_id,
    char *s_department_name_x,
    int *fki_brokertype_id,
    char *s_brokertype_name_x,
    char *s_broker_code,
    char *s_realestateboardnumber_number,
    int *i_agent_bannernumber,
    char *s_language_name_x,
    int *i_broker_photocopiercode,
    int *i_broker_longdistancecode,
    char *s_broker_name,
    char *s_broker_realestateassociationlicense,
    char *dt_broker_hiredate,
    char *dt_broker_leavedate,
    int *b_broker_tranquillit,
    int *b_broker_residentiallicense,
    int *b_broker_commerciallicense,
    int *b_broker_mortgagelicense,
    int *b_broker_paidbyofficetranquillit,
    char *dt_broker_fintraccertification,
    int *b_broker_isactive,
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
    int *fki_province_id,
    char *s_province_name_x,
    int *fki_country_id,
    char *s_country_name_x
    ) {
    int *pki_broker_id_copy = NULL;
    if (pki_broker_id) {
        pki_broker_id_copy = malloc(sizeof(int));
        if (pki_broker_id_copy) *pki_broker_id_copy = *pki_broker_id;
    }
    int *fki_department_id_copy = NULL;
    if (fki_department_id) {
        fki_department_id_copy = malloc(sizeof(int));
        if (fki_department_id_copy) *fki_department_id_copy = *fki_department_id;
    }
    int *fki_brokertype_id_copy = NULL;
    if (fki_brokertype_id) {
        fki_brokertype_id_copy = malloc(sizeof(int));
        if (fki_brokertype_id_copy) *fki_brokertype_id_copy = *fki_brokertype_id;
    }
    int *i_agent_bannernumber_copy = NULL;
    if (i_agent_bannernumber) {
        i_agent_bannernumber_copy = malloc(sizeof(int));
        if (i_agent_bannernumber_copy) *i_agent_bannernumber_copy = *i_agent_bannernumber;
    }
    int *i_broker_photocopiercode_copy = NULL;
    if (i_broker_photocopiercode) {
        i_broker_photocopiercode_copy = malloc(sizeof(int));
        if (i_broker_photocopiercode_copy) *i_broker_photocopiercode_copy = *i_broker_photocopiercode;
    }
    int *i_broker_longdistancecode_copy = NULL;
    if (i_broker_longdistancecode) {
        i_broker_longdistancecode_copy = malloc(sizeof(int));
        if (i_broker_longdistancecode_copy) *i_broker_longdistancecode_copy = *i_broker_longdistancecode;
    }
    int *b_broker_tranquillit_copy = NULL;
    if (b_broker_tranquillit) {
        b_broker_tranquillit_copy = malloc(sizeof(int));
        if (b_broker_tranquillit_copy) *b_broker_tranquillit_copy = *b_broker_tranquillit;
    }
    int *b_broker_residentiallicense_copy = NULL;
    if (b_broker_residentiallicense) {
        b_broker_residentiallicense_copy = malloc(sizeof(int));
        if (b_broker_residentiallicense_copy) *b_broker_residentiallicense_copy = *b_broker_residentiallicense;
    }
    int *b_broker_commerciallicense_copy = NULL;
    if (b_broker_commerciallicense) {
        b_broker_commerciallicense_copy = malloc(sizeof(int));
        if (b_broker_commerciallicense_copy) *b_broker_commerciallicense_copy = *b_broker_commerciallicense;
    }
    int *b_broker_mortgagelicense_copy = NULL;
    if (b_broker_mortgagelicense) {
        b_broker_mortgagelicense_copy = malloc(sizeof(int));
        if (b_broker_mortgagelicense_copy) *b_broker_mortgagelicense_copy = *b_broker_mortgagelicense;
    }
    int *b_broker_paidbyofficetranquillit_copy = NULL;
    if (b_broker_paidbyofficetranquillit) {
        b_broker_paidbyofficetranquillit_copy = malloc(sizeof(int));
        if (b_broker_paidbyofficetranquillit_copy) *b_broker_paidbyofficetranquillit_copy = *b_broker_paidbyofficetranquillit;
    }
    int *b_broker_isactive_copy = NULL;
    if (b_broker_isactive) {
        b_broker_isactive_copy = malloc(sizeof(int));
        if (b_broker_isactive_copy) *b_broker_isactive_copy = *b_broker_isactive;
    }
    int *fki_province_id_copy = NULL;
    if (fki_province_id) {
        fki_province_id_copy = malloc(sizeof(int));
        if (fki_province_id_copy) *fki_province_id_copy = *fki_province_id;
    }
    int *fki_country_id_copy = NULL;
    if (fki_country_id) {
        fki_country_id_copy = malloc(sizeof(int));
        if (fki_country_id_copy) *fki_country_id_copy = *fki_country_id;
    }
    broker_list_element_t *result = broker_list_element_create_internal (
        pki_broker_id_copy,
        fki_department_id_copy,
        s_department_name_x,
        fki_brokertype_id_copy,
        s_brokertype_name_x,
        s_broker_code,
        s_realestateboardnumber_number,
        i_agent_bannernumber_copy,
        s_language_name_x,
        i_broker_photocopiercode_copy,
        i_broker_longdistancecode_copy,
        s_broker_name,
        s_broker_realestateassociationlicense,
        dt_broker_hiredate,
        dt_broker_leavedate,
        b_broker_tranquillit_copy,
        b_broker_residentiallicense_copy,
        b_broker_commerciallicense_copy,
        b_broker_mortgagelicense_copy,
        b_broker_paidbyofficetranquillit_copy,
        dt_broker_fintraccertification,
        b_broker_isactive_copy,
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
        fki_province_id_copy,
        s_province_name_x,
        fki_country_id_copy,
        s_country_name_x
        );
    if (!result) {
        free(pki_broker_id_copy);
        free(fki_department_id_copy);
        free(fki_brokertype_id_copy);
        free(i_agent_bannernumber_copy);
        free(i_broker_photocopiercode_copy);
        free(i_broker_longdistancecode_copy);
        free(b_broker_tranquillit_copy);
        free(b_broker_residentiallicense_copy);
        free(b_broker_commerciallicense_copy);
        free(b_broker_mortgagelicense_copy);
        free(b_broker_paidbyofficetranquillit_copy);
        free(b_broker_isactive_copy);
        free(fki_province_id_copy);
        free(fki_country_id_copy);
    }
    return result;
}

void broker_list_element_free(broker_list_element_t *broker_list_element) {
    if(NULL == broker_list_element){
        return ;
    }
    if(broker_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "broker_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (broker_list_element->pki_broker_id) {
        free(broker_list_element->pki_broker_id);
        broker_list_element->pki_broker_id = NULL;
    }
    if (broker_list_element->fki_department_id) {
        free(broker_list_element->fki_department_id);
        broker_list_element->fki_department_id = NULL;
    }
    if (broker_list_element->s_department_name_x) {
        free(broker_list_element->s_department_name_x);
        broker_list_element->s_department_name_x = NULL;
    }
    if (broker_list_element->fki_brokertype_id) {
        free(broker_list_element->fki_brokertype_id);
        broker_list_element->fki_brokertype_id = NULL;
    }
    if (broker_list_element->s_brokertype_name_x) {
        free(broker_list_element->s_brokertype_name_x);
        broker_list_element->s_brokertype_name_x = NULL;
    }
    if (broker_list_element->s_broker_code) {
        free(broker_list_element->s_broker_code);
        broker_list_element->s_broker_code = NULL;
    }
    if (broker_list_element->s_realestateboardnumber_number) {
        free(broker_list_element->s_realestateboardnumber_number);
        broker_list_element->s_realestateboardnumber_number = NULL;
    }
    if (broker_list_element->i_agent_bannernumber) {
        free(broker_list_element->i_agent_bannernumber);
        broker_list_element->i_agent_bannernumber = NULL;
    }
    if (broker_list_element->s_language_name_x) {
        free(broker_list_element->s_language_name_x);
        broker_list_element->s_language_name_x = NULL;
    }
    if (broker_list_element->i_broker_photocopiercode) {
        free(broker_list_element->i_broker_photocopiercode);
        broker_list_element->i_broker_photocopiercode = NULL;
    }
    if (broker_list_element->i_broker_longdistancecode) {
        free(broker_list_element->i_broker_longdistancecode);
        broker_list_element->i_broker_longdistancecode = NULL;
    }
    if (broker_list_element->s_broker_name) {
        free(broker_list_element->s_broker_name);
        broker_list_element->s_broker_name = NULL;
    }
    if (broker_list_element->s_broker_realestateassociationlicense) {
        free(broker_list_element->s_broker_realestateassociationlicense);
        broker_list_element->s_broker_realestateassociationlicense = NULL;
    }
    if (broker_list_element->dt_broker_hiredate) {
        free(broker_list_element->dt_broker_hiredate);
        broker_list_element->dt_broker_hiredate = NULL;
    }
    if (broker_list_element->dt_broker_leavedate) {
        free(broker_list_element->dt_broker_leavedate);
        broker_list_element->dt_broker_leavedate = NULL;
    }
    if (broker_list_element->b_broker_tranquillit) {
        free(broker_list_element->b_broker_tranquillit);
        broker_list_element->b_broker_tranquillit = NULL;
    }
    if (broker_list_element->b_broker_residentiallicense) {
        free(broker_list_element->b_broker_residentiallicense);
        broker_list_element->b_broker_residentiallicense = NULL;
    }
    if (broker_list_element->b_broker_commerciallicense) {
        free(broker_list_element->b_broker_commerciallicense);
        broker_list_element->b_broker_commerciallicense = NULL;
    }
    if (broker_list_element->b_broker_mortgagelicense) {
        free(broker_list_element->b_broker_mortgagelicense);
        broker_list_element->b_broker_mortgagelicense = NULL;
    }
    if (broker_list_element->b_broker_paidbyofficetranquillit) {
        free(broker_list_element->b_broker_paidbyofficetranquillit);
        broker_list_element->b_broker_paidbyofficetranquillit = NULL;
    }
    if (broker_list_element->dt_broker_fintraccertification) {
        free(broker_list_element->dt_broker_fintraccertification);
        broker_list_element->dt_broker_fintraccertification = NULL;
    }
    if (broker_list_element->b_broker_isactive) {
        free(broker_list_element->b_broker_isactive);
        broker_list_element->b_broker_isactive = NULL;
    }
    if (broker_list_element->s_contact_firstname) {
        free(broker_list_element->s_contact_firstname);
        broker_list_element->s_contact_firstname = NULL;
    }
    if (broker_list_element->s_contact_lastname) {
        free(broker_list_element->s_contact_lastname);
        broker_list_element->s_contact_lastname = NULL;
    }
    if (broker_list_element->dt_contact_birthdate) {
        free(broker_list_element->dt_contact_birthdate);
        broker_list_element->dt_contact_birthdate = NULL;
    }
    if (broker_list_element->s_email_address) {
        free(broker_list_element->s_email_address);
        broker_list_element->s_email_address = NULL;
    }
    if (broker_list_element->s_phone_e164) {
        free(broker_list_element->s_phone_e164);
        broker_list_element->s_phone_e164 = NULL;
    }
    if (broker_list_element->s_address_civic) {
        free(broker_list_element->s_address_civic);
        broker_list_element->s_address_civic = NULL;
    }
    if (broker_list_element->s_address_street) {
        free(broker_list_element->s_address_street);
        broker_list_element->s_address_street = NULL;
    }
    if (broker_list_element->s_address_suite) {
        free(broker_list_element->s_address_suite);
        broker_list_element->s_address_suite = NULL;
    }
    if (broker_list_element->s_address_city) {
        free(broker_list_element->s_address_city);
        broker_list_element->s_address_city = NULL;
    }
    if (broker_list_element->s_address_zip) {
        free(broker_list_element->s_address_zip);
        broker_list_element->s_address_zip = NULL;
    }
    if (broker_list_element->fki_province_id) {
        free(broker_list_element->fki_province_id);
        broker_list_element->fki_province_id = NULL;
    }
    if (broker_list_element->s_province_name_x) {
        free(broker_list_element->s_province_name_x);
        broker_list_element->s_province_name_x = NULL;
    }
    if (broker_list_element->fki_country_id) {
        free(broker_list_element->fki_country_id);
        broker_list_element->fki_country_id = NULL;
    }
    if (broker_list_element->s_country_name_x) {
        free(broker_list_element->s_country_name_x);
        broker_list_element->s_country_name_x = NULL;
    }
    free(broker_list_element);
}

cJSON *broker_list_element_convertToJSON(broker_list_element_t *broker_list_element) {
    cJSON *item = cJSON_CreateObject();

    // broker_list_element->pki_broker_id
    if (!broker_list_element->pki_broker_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBrokerID", *broker_list_element->pki_broker_id) == NULL) {
    goto fail; //Numeric
    }


    // broker_list_element->fki_department_id
    if (!broker_list_element->fki_department_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDepartmentID", *broker_list_element->fki_department_id) == NULL) {
    goto fail; //Numeric
    }


    // broker_list_element->s_department_name_x
    if(broker_list_element->s_department_name_x) {
    if(cJSON_AddStringToObject(item, "sDepartmentNameX", broker_list_element->s_department_name_x) == NULL) {
    goto fail; //String
    }
    }


    // broker_list_element->fki_brokertype_id
    if (!broker_list_element->fki_brokertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBrokertypeID", *broker_list_element->fki_brokertype_id) == NULL) {
    goto fail; //Numeric
    }


    // broker_list_element->s_brokertype_name_x
    if (!broker_list_element->s_brokertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBrokertypeNameX", broker_list_element->s_brokertype_name_x) == NULL) {
    goto fail; //String
    }


    // broker_list_element->s_broker_code
    if (!broker_list_element->s_broker_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBrokerCode", broker_list_element->s_broker_code) == NULL) {
    goto fail; //String
    }


    // broker_list_element->s_realestateboardnumber_number
    if(broker_list_element->s_realestateboardnumber_number) {
    if(cJSON_AddStringToObject(item, "sRealestateboardnumberNumber", broker_list_element->s_realestateboardnumber_number) == NULL) {
    goto fail; //String
    }
    }


    // broker_list_element->i_agent_bannernumber
    if(broker_list_element->i_agent_bannernumber) {
    if(cJSON_AddNumberToObject(item, "iAgentBannernumber", *broker_list_element->i_agent_bannernumber) == NULL) {
    goto fail; //Numeric
    }
    }


    // broker_list_element->s_language_name_x
    if(broker_list_element->s_language_name_x) {
    if(cJSON_AddStringToObject(item, "sLanguageNameX", broker_list_element->s_language_name_x) == NULL) {
    goto fail; //String
    }
    }


    // broker_list_element->i_broker_photocopiercode
    if (!broker_list_element->i_broker_photocopiercode) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrokerPhotocopiercode", *broker_list_element->i_broker_photocopiercode) == NULL) {
    goto fail; //Numeric
    }


    // broker_list_element->i_broker_longdistancecode
    if (!broker_list_element->i_broker_longdistancecode) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iBrokerLongdistancecode", *broker_list_element->i_broker_longdistancecode) == NULL) {
    goto fail; //Numeric
    }


    // broker_list_element->s_broker_name
    if (!broker_list_element->s_broker_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBrokerName", broker_list_element->s_broker_name) == NULL) {
    goto fail; //String
    }


    // broker_list_element->s_broker_realestateassociationlicense
    if (!broker_list_element->s_broker_realestateassociationlicense) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBrokerRealestateassociationlicense", broker_list_element->s_broker_realestateassociationlicense) == NULL) {
    goto fail; //String
    }


    // broker_list_element->dt_broker_hiredate
    if (!broker_list_element->dt_broker_hiredate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtBrokerHiredate", broker_list_element->dt_broker_hiredate) == NULL) {
    goto fail; //String
    }


    // broker_list_element->dt_broker_leavedate
    if(broker_list_element->dt_broker_leavedate) {
    if(cJSON_AddStringToObject(item, "dtBrokerLeavedate", broker_list_element->dt_broker_leavedate) == NULL) {
    goto fail; //String
    }
    }


    // broker_list_element->b_broker_tranquillit
    if(broker_list_element->b_broker_tranquillit) {
    if(cJSON_AddBoolToObject(item, "bBrokerTranquillit", *broker_list_element->b_broker_tranquillit) == NULL) {
    goto fail; //Bool
    }
    }


    // broker_list_element->b_broker_residentiallicense
    if (!broker_list_element->b_broker_residentiallicense) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bBrokerResidentiallicense", *broker_list_element->b_broker_residentiallicense) == NULL) {
    goto fail; //Bool
    }


    // broker_list_element->b_broker_commerciallicense
    if (!broker_list_element->b_broker_commerciallicense) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bBrokerCommerciallicense", *broker_list_element->b_broker_commerciallicense) == NULL) {
    goto fail; //Bool
    }


    // broker_list_element->b_broker_mortgagelicense
    if (!broker_list_element->b_broker_mortgagelicense) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bBrokerMortgagelicense", *broker_list_element->b_broker_mortgagelicense) == NULL) {
    goto fail; //Bool
    }


    // broker_list_element->b_broker_paidbyofficetranquillit
    if (!broker_list_element->b_broker_paidbyofficetranquillit) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bBrokerPaidbyofficetranquillit", *broker_list_element->b_broker_paidbyofficetranquillit) == NULL) {
    goto fail; //Bool
    }


    // broker_list_element->dt_broker_fintraccertification
    if(broker_list_element->dt_broker_fintraccertification) {
    if(cJSON_AddStringToObject(item, "dtBrokerFintraccertification", broker_list_element->dt_broker_fintraccertification) == NULL) {
    goto fail; //String
    }
    }


    // broker_list_element->b_broker_isactive
    if (!broker_list_element->b_broker_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bBrokerIsactive", *broker_list_element->b_broker_isactive) == NULL) {
    goto fail; //Bool
    }


    // broker_list_element->s_contact_firstname
    if(broker_list_element->s_contact_firstname) {
    if(cJSON_AddStringToObject(item, "sContactFirstname", broker_list_element->s_contact_firstname) == NULL) {
    goto fail; //String
    }
    }


    // broker_list_element->s_contact_lastname
    if(broker_list_element->s_contact_lastname) {
    if(cJSON_AddStringToObject(item, "sContactLastname", broker_list_element->s_contact_lastname) == NULL) {
    goto fail; //String
    }
    }


    // broker_list_element->dt_contact_birthdate
    if(broker_list_element->dt_contact_birthdate) {
    if(cJSON_AddStringToObject(item, "dtContactBirthdate", broker_list_element->dt_contact_birthdate) == NULL) {
    goto fail; //String
    }
    }


    // broker_list_element->s_email_address
    if(broker_list_element->s_email_address) {
    if(cJSON_AddStringToObject(item, "sEmailAddress", broker_list_element->s_email_address) == NULL) {
    goto fail; //String
    }
    }


    // broker_list_element->s_phone_e164
    if(broker_list_element->s_phone_e164) {
    if(cJSON_AddStringToObject(item, "sPhoneE164", broker_list_element->s_phone_e164) == NULL) {
    goto fail; //String
    }
    }


    // broker_list_element->s_address_civic
    if(broker_list_element->s_address_civic) {
    if(cJSON_AddStringToObject(item, "sAddressCivic", broker_list_element->s_address_civic) == NULL) {
    goto fail; //String
    }
    }


    // broker_list_element->s_address_street
    if(broker_list_element->s_address_street) {
    if(cJSON_AddStringToObject(item, "sAddressStreet", broker_list_element->s_address_street) == NULL) {
    goto fail; //String
    }
    }


    // broker_list_element->s_address_suite
    if(broker_list_element->s_address_suite) {
    if(cJSON_AddStringToObject(item, "sAddressSuite", broker_list_element->s_address_suite) == NULL) {
    goto fail; //String
    }
    }


    // broker_list_element->s_address_city
    if(broker_list_element->s_address_city) {
    if(cJSON_AddStringToObject(item, "sAddressCity", broker_list_element->s_address_city) == NULL) {
    goto fail; //String
    }
    }


    // broker_list_element->s_address_zip
    if(broker_list_element->s_address_zip) {
    if(cJSON_AddStringToObject(item, "sAddressZip", broker_list_element->s_address_zip) == NULL) {
    goto fail; //String
    }
    }


    // broker_list_element->fki_province_id
    if(broker_list_element->fki_province_id) {
    if(cJSON_AddNumberToObject(item, "fkiProvinceID", *broker_list_element->fki_province_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // broker_list_element->s_province_name_x
    if(broker_list_element->s_province_name_x) {
    if(cJSON_AddStringToObject(item, "sProvinceNameX", broker_list_element->s_province_name_x) == NULL) {
    goto fail; //String
    }
    }


    // broker_list_element->fki_country_id
    if(broker_list_element->fki_country_id) {
    if(cJSON_AddNumberToObject(item, "fkiCountryID", *broker_list_element->fki_country_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // broker_list_element->s_country_name_x
    if(broker_list_element->s_country_name_x) {
    if(cJSON_AddStringToObject(item, "sCountryNameX", broker_list_element->s_country_name_x) == NULL) {
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

broker_list_element_t *broker_list_element_parseFromJSON(cJSON *broker_list_elementJSON){

    broker_list_element_t *broker_list_element_local_var = NULL;

    // define the local variable for broker_list_element->pki_broker_id
    int *pki_broker_id_local_var = NULL;

    // define the local variable for broker_list_element->fki_department_id
    int *fki_department_id_local_var = NULL;

    char *s_department_name_x_local_str = NULL;

    // define the local variable for broker_list_element->fki_brokertype_id
    int *fki_brokertype_id_local_var = NULL;

    char *s_brokertype_name_x_local_str = NULL;

    char *s_broker_code_local_str = NULL;

    char *s_realestateboardnumber_number_local_str = NULL;

    // define the local variable for broker_list_element->i_agent_bannernumber
    int *i_agent_bannernumber_local_var = NULL;

    char *s_language_name_x_local_str = NULL;

    // define the local variable for broker_list_element->i_broker_photocopiercode
    int *i_broker_photocopiercode_local_var = NULL;

    // define the local variable for broker_list_element->i_broker_longdistancecode
    int *i_broker_longdistancecode_local_var = NULL;

    char *s_broker_name_local_str = NULL;

    char *s_broker_realestateassociationlicense_local_str = NULL;

    char *dt_broker_hiredate_local_str = NULL;

    char *dt_broker_leavedate_local_str = NULL;

    // define the local variable for broker_list_element->b_broker_tranquillit
    int *b_broker_tranquillit_local_var = NULL;

    // define the local variable for broker_list_element->b_broker_residentiallicense
    int *b_broker_residentiallicense_local_var = NULL;

    // define the local variable for broker_list_element->b_broker_commerciallicense
    int *b_broker_commerciallicense_local_var = NULL;

    // define the local variable for broker_list_element->b_broker_mortgagelicense
    int *b_broker_mortgagelicense_local_var = NULL;

    // define the local variable for broker_list_element->b_broker_paidbyofficetranquillit
    int *b_broker_paidbyofficetranquillit_local_var = NULL;

    char *dt_broker_fintraccertification_local_str = NULL;

    // define the local variable for broker_list_element->b_broker_isactive
    int *b_broker_isactive_local_var = NULL;

    char *s_contact_firstname_local_str = NULL;

    char *s_contact_lastname_local_str = NULL;

    char *dt_contact_birthdate_local_str = NULL;

    char *s_email_address_local_str = NULL;

    char *s_phone_e164_local_str = NULL;

    char *s_address_civic_local_str = NULL;

    char *s_address_street_local_str = NULL;

    char *s_address_suite_local_str = NULL;

    char *s_address_city_local_str = NULL;

    char *s_address_zip_local_str = NULL;

    // define the local variable for broker_list_element->fki_province_id
    int *fki_province_id_local_var = NULL;

    char *s_province_name_x_local_str = NULL;

    // define the local variable for broker_list_element->fki_country_id
    int *fki_country_id_local_var = NULL;

    char *s_country_name_x_local_str = NULL;

    // broker_list_element->pki_broker_id
    cJSON *pki_broker_id = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "pkiBrokerID");
    if (cJSON_IsNull(pki_broker_id)) {
        pki_broker_id = NULL;
    }
    if (!pki_broker_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_broker_id))
    {
    goto end; //Numeric
    }
    pki_broker_id_local_var = malloc(sizeof(int));
    if(!pki_broker_id_local_var)
    {
        goto end;
    }
    *pki_broker_id_local_var = pki_broker_id->valuedouble;

    // broker_list_element->fki_department_id
    cJSON *fki_department_id = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "fkiDepartmentID");
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
    fki_department_id_local_var = malloc(sizeof(int));
    if(!fki_department_id_local_var)
    {
        goto end;
    }
    *fki_department_id_local_var = fki_department_id->valuedouble;

    // broker_list_element->s_department_name_x
    cJSON *s_department_name_x = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "sDepartmentNameX");
    if (cJSON_IsNull(s_department_name_x)) {
        s_department_name_x = NULL;
    }
    if (s_department_name_x) { 
    if(!cJSON_IsString(s_department_name_x) && !cJSON_IsNull(s_department_name_x))
    {
    goto end; //String
    }
    }

    // broker_list_element->fki_brokertype_id
    cJSON *fki_brokertype_id = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "fkiBrokertypeID");
    if (cJSON_IsNull(fki_brokertype_id)) {
        fki_brokertype_id = NULL;
    }
    if (!fki_brokertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_brokertype_id))
    {
    goto end; //Numeric
    }
    fki_brokertype_id_local_var = malloc(sizeof(int));
    if(!fki_brokertype_id_local_var)
    {
        goto end;
    }
    *fki_brokertype_id_local_var = fki_brokertype_id->valuedouble;

    // broker_list_element->s_brokertype_name_x
    cJSON *s_brokertype_name_x = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "sBrokertypeNameX");
    if (cJSON_IsNull(s_brokertype_name_x)) {
        s_brokertype_name_x = NULL;
    }
    if (!s_brokertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_brokertype_name_x))
    {
    goto end; //String
    }

    // broker_list_element->s_broker_code
    cJSON *s_broker_code = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "sBrokerCode");
    if (cJSON_IsNull(s_broker_code)) {
        s_broker_code = NULL;
    }
    if (!s_broker_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_broker_code))
    {
    goto end; //String
    }

    // broker_list_element->s_realestateboardnumber_number
    cJSON *s_realestateboardnumber_number = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "sRealestateboardnumberNumber");
    if (cJSON_IsNull(s_realestateboardnumber_number)) {
        s_realestateboardnumber_number = NULL;
    }
    if (s_realestateboardnumber_number) { 
    if(!cJSON_IsString(s_realestateboardnumber_number) && !cJSON_IsNull(s_realestateboardnumber_number))
    {
    goto end; //String
    }
    }

    // broker_list_element->i_agent_bannernumber
    cJSON *i_agent_bannernumber = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "iAgentBannernumber");
    if (cJSON_IsNull(i_agent_bannernumber)) {
        i_agent_bannernumber = NULL;
    }
    if (i_agent_bannernumber) { 
    if(!cJSON_IsNumber(i_agent_bannernumber))
    {
    goto end; //Numeric
    }
    i_agent_bannernumber_local_var = malloc(sizeof(int));
    if(!i_agent_bannernumber_local_var)
    {
        goto end;
    }
    *i_agent_bannernumber_local_var = i_agent_bannernumber->valuedouble;
    }

    // broker_list_element->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "sLanguageNameX");
    if (cJSON_IsNull(s_language_name_x)) {
        s_language_name_x = NULL;
    }
    if (s_language_name_x) { 
    if(!cJSON_IsString(s_language_name_x) && !cJSON_IsNull(s_language_name_x))
    {
    goto end; //String
    }
    }

    // broker_list_element->i_broker_photocopiercode
    cJSON *i_broker_photocopiercode = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "iBrokerPhotocopiercode");
    if (cJSON_IsNull(i_broker_photocopiercode)) {
        i_broker_photocopiercode = NULL;
    }
    if (!i_broker_photocopiercode) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_broker_photocopiercode))
    {
    goto end; //Numeric
    }
    i_broker_photocopiercode_local_var = malloc(sizeof(int));
    if(!i_broker_photocopiercode_local_var)
    {
        goto end;
    }
    *i_broker_photocopiercode_local_var = i_broker_photocopiercode->valuedouble;

    // broker_list_element->i_broker_longdistancecode
    cJSON *i_broker_longdistancecode = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "iBrokerLongdistancecode");
    if (cJSON_IsNull(i_broker_longdistancecode)) {
        i_broker_longdistancecode = NULL;
    }
    if (!i_broker_longdistancecode) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_broker_longdistancecode))
    {
    goto end; //Numeric
    }
    i_broker_longdistancecode_local_var = malloc(sizeof(int));
    if(!i_broker_longdistancecode_local_var)
    {
        goto end;
    }
    *i_broker_longdistancecode_local_var = i_broker_longdistancecode->valuedouble;

    // broker_list_element->s_broker_name
    cJSON *s_broker_name = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "sBrokerName");
    if (cJSON_IsNull(s_broker_name)) {
        s_broker_name = NULL;
    }
    if (!s_broker_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_broker_name))
    {
    goto end; //String
    }

    // broker_list_element->s_broker_realestateassociationlicense
    cJSON *s_broker_realestateassociationlicense = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "sBrokerRealestateassociationlicense");
    if (cJSON_IsNull(s_broker_realestateassociationlicense)) {
        s_broker_realestateassociationlicense = NULL;
    }
    if (!s_broker_realestateassociationlicense) {
        goto end;
    }

    
    if(!cJSON_IsString(s_broker_realestateassociationlicense))
    {
    goto end; //String
    }

    // broker_list_element->dt_broker_hiredate
    cJSON *dt_broker_hiredate = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "dtBrokerHiredate");
    if (cJSON_IsNull(dt_broker_hiredate)) {
        dt_broker_hiredate = NULL;
    }
    if (!dt_broker_hiredate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_broker_hiredate))
    {
    goto end; //String
    }

    // broker_list_element->dt_broker_leavedate
    cJSON *dt_broker_leavedate = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "dtBrokerLeavedate");
    if (cJSON_IsNull(dt_broker_leavedate)) {
        dt_broker_leavedate = NULL;
    }
    if (dt_broker_leavedate) { 
    if(!cJSON_IsString(dt_broker_leavedate) && !cJSON_IsNull(dt_broker_leavedate))
    {
    goto end; //String
    }
    }

    // broker_list_element->b_broker_tranquillit
    cJSON *b_broker_tranquillit = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "bBrokerTranquillit");
    if (cJSON_IsNull(b_broker_tranquillit)) {
        b_broker_tranquillit = NULL;
    }
    if (b_broker_tranquillit) { 
    if(!cJSON_IsBool(b_broker_tranquillit))
    {
    goto end; //Bool
    }
    b_broker_tranquillit_local_var = malloc(sizeof(int));
    if(!b_broker_tranquillit_local_var)
    {
        goto end;
    }
    *b_broker_tranquillit_local_var = b_broker_tranquillit->valueint;
    }

    // broker_list_element->b_broker_residentiallicense
    cJSON *b_broker_residentiallicense = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "bBrokerResidentiallicense");
    if (cJSON_IsNull(b_broker_residentiallicense)) {
        b_broker_residentiallicense = NULL;
    }
    if (!b_broker_residentiallicense) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_broker_residentiallicense))
    {
    goto end; //Bool
    }
    b_broker_residentiallicense_local_var = malloc(sizeof(int));
    if(!b_broker_residentiallicense_local_var)
    {
        goto end;
    }
    *b_broker_residentiallicense_local_var = b_broker_residentiallicense->valueint;

    // broker_list_element->b_broker_commerciallicense
    cJSON *b_broker_commerciallicense = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "bBrokerCommerciallicense");
    if (cJSON_IsNull(b_broker_commerciallicense)) {
        b_broker_commerciallicense = NULL;
    }
    if (!b_broker_commerciallicense) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_broker_commerciallicense))
    {
    goto end; //Bool
    }
    b_broker_commerciallicense_local_var = malloc(sizeof(int));
    if(!b_broker_commerciallicense_local_var)
    {
        goto end;
    }
    *b_broker_commerciallicense_local_var = b_broker_commerciallicense->valueint;

    // broker_list_element->b_broker_mortgagelicense
    cJSON *b_broker_mortgagelicense = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "bBrokerMortgagelicense");
    if (cJSON_IsNull(b_broker_mortgagelicense)) {
        b_broker_mortgagelicense = NULL;
    }
    if (!b_broker_mortgagelicense) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_broker_mortgagelicense))
    {
    goto end; //Bool
    }
    b_broker_mortgagelicense_local_var = malloc(sizeof(int));
    if(!b_broker_mortgagelicense_local_var)
    {
        goto end;
    }
    *b_broker_mortgagelicense_local_var = b_broker_mortgagelicense->valueint;

    // broker_list_element->b_broker_paidbyofficetranquillit
    cJSON *b_broker_paidbyofficetranquillit = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "bBrokerPaidbyofficetranquillit");
    if (cJSON_IsNull(b_broker_paidbyofficetranquillit)) {
        b_broker_paidbyofficetranquillit = NULL;
    }
    if (!b_broker_paidbyofficetranquillit) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_broker_paidbyofficetranquillit))
    {
    goto end; //Bool
    }
    b_broker_paidbyofficetranquillit_local_var = malloc(sizeof(int));
    if(!b_broker_paidbyofficetranquillit_local_var)
    {
        goto end;
    }
    *b_broker_paidbyofficetranquillit_local_var = b_broker_paidbyofficetranquillit->valueint;

    // broker_list_element->dt_broker_fintraccertification
    cJSON *dt_broker_fintraccertification = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "dtBrokerFintraccertification");
    if (cJSON_IsNull(dt_broker_fintraccertification)) {
        dt_broker_fintraccertification = NULL;
    }
    if (dt_broker_fintraccertification) { 
    if(!cJSON_IsString(dt_broker_fintraccertification) && !cJSON_IsNull(dt_broker_fintraccertification))
    {
    goto end; //String
    }
    }

    // broker_list_element->b_broker_isactive
    cJSON *b_broker_isactive = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "bBrokerIsactive");
    if (cJSON_IsNull(b_broker_isactive)) {
        b_broker_isactive = NULL;
    }
    if (!b_broker_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_broker_isactive))
    {
    goto end; //Bool
    }
    b_broker_isactive_local_var = malloc(sizeof(int));
    if(!b_broker_isactive_local_var)
    {
        goto end;
    }
    *b_broker_isactive_local_var = b_broker_isactive->valueint;

    // broker_list_element->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "sContactFirstname");
    if (cJSON_IsNull(s_contact_firstname)) {
        s_contact_firstname = NULL;
    }
    if (s_contact_firstname) { 
    if(!cJSON_IsString(s_contact_firstname) && !cJSON_IsNull(s_contact_firstname))
    {
    goto end; //String
    }
    }

    // broker_list_element->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "sContactLastname");
    if (cJSON_IsNull(s_contact_lastname)) {
        s_contact_lastname = NULL;
    }
    if (s_contact_lastname) { 
    if(!cJSON_IsString(s_contact_lastname) && !cJSON_IsNull(s_contact_lastname))
    {
    goto end; //String
    }
    }

    // broker_list_element->dt_contact_birthdate
    cJSON *dt_contact_birthdate = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "dtContactBirthdate");
    if (cJSON_IsNull(dt_contact_birthdate)) {
        dt_contact_birthdate = NULL;
    }
    if (dt_contact_birthdate) { 
    if(!cJSON_IsString(dt_contact_birthdate) && !cJSON_IsNull(dt_contact_birthdate))
    {
    goto end; //String
    }
    }

    // broker_list_element->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "sEmailAddress");
    if (cJSON_IsNull(s_email_address)) {
        s_email_address = NULL;
    }
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address) && !cJSON_IsNull(s_email_address))
    {
    goto end; //String
    }
    }

    // broker_list_element->s_phone_e164
    cJSON *s_phone_e164 = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "sPhoneE164");
    if (cJSON_IsNull(s_phone_e164)) {
        s_phone_e164 = NULL;
    }
    if (s_phone_e164) { 
    if(!cJSON_IsString(s_phone_e164) && !cJSON_IsNull(s_phone_e164))
    {
    goto end; //String
    }
    }

    // broker_list_element->s_address_civic
    cJSON *s_address_civic = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "sAddressCivic");
    if (cJSON_IsNull(s_address_civic)) {
        s_address_civic = NULL;
    }
    if (s_address_civic) { 
    if(!cJSON_IsString(s_address_civic) && !cJSON_IsNull(s_address_civic))
    {
    goto end; //String
    }
    }

    // broker_list_element->s_address_street
    cJSON *s_address_street = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "sAddressStreet");
    if (cJSON_IsNull(s_address_street)) {
        s_address_street = NULL;
    }
    if (s_address_street) { 
    if(!cJSON_IsString(s_address_street) && !cJSON_IsNull(s_address_street))
    {
    goto end; //String
    }
    }

    // broker_list_element->s_address_suite
    cJSON *s_address_suite = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "sAddressSuite");
    if (cJSON_IsNull(s_address_suite)) {
        s_address_suite = NULL;
    }
    if (s_address_suite) { 
    if(!cJSON_IsString(s_address_suite) && !cJSON_IsNull(s_address_suite))
    {
    goto end; //String
    }
    }

    // broker_list_element->s_address_city
    cJSON *s_address_city = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "sAddressCity");
    if (cJSON_IsNull(s_address_city)) {
        s_address_city = NULL;
    }
    if (s_address_city) { 
    if(!cJSON_IsString(s_address_city) && !cJSON_IsNull(s_address_city))
    {
    goto end; //String
    }
    }

    // broker_list_element->s_address_zip
    cJSON *s_address_zip = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "sAddressZip");
    if (cJSON_IsNull(s_address_zip)) {
        s_address_zip = NULL;
    }
    if (s_address_zip) { 
    if(!cJSON_IsString(s_address_zip) && !cJSON_IsNull(s_address_zip))
    {
    goto end; //String
    }
    }

    // broker_list_element->fki_province_id
    cJSON *fki_province_id = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "fkiProvinceID");
    if (cJSON_IsNull(fki_province_id)) {
        fki_province_id = NULL;
    }
    if (fki_province_id) { 
    if(!cJSON_IsNumber(fki_province_id))
    {
    goto end; //Numeric
    }
    fki_province_id_local_var = malloc(sizeof(int));
    if(!fki_province_id_local_var)
    {
        goto end;
    }
    *fki_province_id_local_var = fki_province_id->valuedouble;
    }

    // broker_list_element->s_province_name_x
    cJSON *s_province_name_x = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "sProvinceNameX");
    if (cJSON_IsNull(s_province_name_x)) {
        s_province_name_x = NULL;
    }
    if (s_province_name_x) { 
    if(!cJSON_IsString(s_province_name_x) && !cJSON_IsNull(s_province_name_x))
    {
    goto end; //String
    }
    }

    // broker_list_element->fki_country_id
    cJSON *fki_country_id = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "fkiCountryID");
    if (cJSON_IsNull(fki_country_id)) {
        fki_country_id = NULL;
    }
    if (fki_country_id) { 
    if(!cJSON_IsNumber(fki_country_id))
    {
    goto end; //Numeric
    }
    fki_country_id_local_var = malloc(sizeof(int));
    if(!fki_country_id_local_var)
    {
        goto end;
    }
    *fki_country_id_local_var = fki_country_id->valuedouble;
    }

    // broker_list_element->s_country_name_x
    cJSON *s_country_name_x = cJSON_GetObjectItemCaseSensitive(broker_list_elementJSON, "sCountryNameX");
    if (cJSON_IsNull(s_country_name_x)) {
        s_country_name_x = NULL;
    }
    if (s_country_name_x) { 
    if(!cJSON_IsString(s_country_name_x) && !cJSON_IsNull(s_country_name_x))
    {
    goto end; //String
    }
    }


    if (s_department_name_x && !cJSON_IsNull(s_department_name_x)) s_department_name_x_local_str = strdup(s_department_name_x->valuestring);
    if (s_brokertype_name_x && !cJSON_IsNull(s_brokertype_name_x)) s_brokertype_name_x_local_str = strdup(s_brokertype_name_x->valuestring);
    if (s_broker_code && !cJSON_IsNull(s_broker_code)) s_broker_code_local_str = strdup(s_broker_code->valuestring);
    if (s_realestateboardnumber_number && !cJSON_IsNull(s_realestateboardnumber_number)) s_realestateboardnumber_number_local_str = strdup(s_realestateboardnumber_number->valuestring);
    if (s_language_name_x && !cJSON_IsNull(s_language_name_x)) s_language_name_x_local_str = strdup(s_language_name_x->valuestring);
    if (s_broker_name && !cJSON_IsNull(s_broker_name)) s_broker_name_local_str = strdup(s_broker_name->valuestring);
    if (s_broker_realestateassociationlicense && !cJSON_IsNull(s_broker_realestateassociationlicense)) s_broker_realestateassociationlicense_local_str = strdup(s_broker_realestateassociationlicense->valuestring);
    if (dt_broker_hiredate && !cJSON_IsNull(dt_broker_hiredate)) dt_broker_hiredate_local_str = strdup(dt_broker_hiredate->valuestring);
    if (dt_broker_leavedate && !cJSON_IsNull(dt_broker_leavedate)) dt_broker_leavedate_local_str = strdup(dt_broker_leavedate->valuestring);
    if (dt_broker_fintraccertification && !cJSON_IsNull(dt_broker_fintraccertification)) dt_broker_fintraccertification_local_str = strdup(dt_broker_fintraccertification->valuestring);
    if (s_contact_firstname && !cJSON_IsNull(s_contact_firstname)) s_contact_firstname_local_str = strdup(s_contact_firstname->valuestring);
    if (s_contact_lastname && !cJSON_IsNull(s_contact_lastname)) s_contact_lastname_local_str = strdup(s_contact_lastname->valuestring);
    if (dt_contact_birthdate && !cJSON_IsNull(dt_contact_birthdate)) dt_contact_birthdate_local_str = strdup(dt_contact_birthdate->valuestring);
    if (s_email_address && !cJSON_IsNull(s_email_address)) s_email_address_local_str = strdup(s_email_address->valuestring);
    if (s_phone_e164 && !cJSON_IsNull(s_phone_e164)) s_phone_e164_local_str = strdup(s_phone_e164->valuestring);
    if (s_address_civic && !cJSON_IsNull(s_address_civic)) s_address_civic_local_str = strdup(s_address_civic->valuestring);
    if (s_address_street && !cJSON_IsNull(s_address_street)) s_address_street_local_str = strdup(s_address_street->valuestring);
    if (s_address_suite && !cJSON_IsNull(s_address_suite)) s_address_suite_local_str = strdup(s_address_suite->valuestring);
    if (s_address_city && !cJSON_IsNull(s_address_city)) s_address_city_local_str = strdup(s_address_city->valuestring);
    if (s_address_zip && !cJSON_IsNull(s_address_zip)) s_address_zip_local_str = strdup(s_address_zip->valuestring);
    if (s_province_name_x && !cJSON_IsNull(s_province_name_x)) s_province_name_x_local_str = strdup(s_province_name_x->valuestring);
    if (s_country_name_x && !cJSON_IsNull(s_country_name_x)) s_country_name_x_local_str = strdup(s_country_name_x->valuestring);

    broker_list_element_local_var = broker_list_element_create_internal (
        pki_broker_id_local_var,
        fki_department_id_local_var,
        s_department_name_x_local_str,
        fki_brokertype_id_local_var,
        s_brokertype_name_x_local_str,
        s_broker_code_local_str,
        s_realestateboardnumber_number_local_str,
        i_agent_bannernumber_local_var,
        s_language_name_x_local_str,
        i_broker_photocopiercode_local_var,
        i_broker_longdistancecode_local_var,
        s_broker_name_local_str,
        s_broker_realestateassociationlicense_local_str,
        dt_broker_hiredate_local_str,
        dt_broker_leavedate_local_str,
        b_broker_tranquillit_local_var,
        b_broker_residentiallicense_local_var,
        b_broker_commerciallicense_local_var,
        b_broker_mortgagelicense_local_var,
        b_broker_paidbyofficetranquillit_local_var,
        dt_broker_fintraccertification_local_str,
        b_broker_isactive_local_var,
        s_contact_firstname_local_str,
        s_contact_lastname_local_str,
        dt_contact_birthdate_local_str,
        s_email_address_local_str,
        s_phone_e164_local_str,
        s_address_civic_local_str,
        s_address_street_local_str,
        s_address_suite_local_str,
        s_address_city_local_str,
        s_address_zip_local_str,
        fki_province_id_local_var,
        s_province_name_x_local_str,
        fki_country_id_local_var,
        s_country_name_x_local_str
        );

    if (!broker_list_element_local_var) {
        goto end;
    }

    return broker_list_element_local_var;
end:
    if (pki_broker_id_local_var) {
        free(pki_broker_id_local_var);
        pki_broker_id_local_var = NULL;
    }
    if (fki_department_id_local_var) {
        free(fki_department_id_local_var);
        fki_department_id_local_var = NULL;
    }
    if (s_department_name_x_local_str) {
        free(s_department_name_x_local_str);
        s_department_name_x_local_str = NULL;
    }
    if (fki_brokertype_id_local_var) {
        free(fki_brokertype_id_local_var);
        fki_brokertype_id_local_var = NULL;
    }
    if (s_brokertype_name_x_local_str) {
        free(s_brokertype_name_x_local_str);
        s_brokertype_name_x_local_str = NULL;
    }
    if (s_broker_code_local_str) {
        free(s_broker_code_local_str);
        s_broker_code_local_str = NULL;
    }
    if (s_realestateboardnumber_number_local_str) {
        free(s_realestateboardnumber_number_local_str);
        s_realestateboardnumber_number_local_str = NULL;
    }
    if (i_agent_bannernumber_local_var) {
        free(i_agent_bannernumber_local_var);
        i_agent_bannernumber_local_var = NULL;
    }
    if (s_language_name_x_local_str) {
        free(s_language_name_x_local_str);
        s_language_name_x_local_str = NULL;
    }
    if (i_broker_photocopiercode_local_var) {
        free(i_broker_photocopiercode_local_var);
        i_broker_photocopiercode_local_var = NULL;
    }
    if (i_broker_longdistancecode_local_var) {
        free(i_broker_longdistancecode_local_var);
        i_broker_longdistancecode_local_var = NULL;
    }
    if (s_broker_name_local_str) {
        free(s_broker_name_local_str);
        s_broker_name_local_str = NULL;
    }
    if (s_broker_realestateassociationlicense_local_str) {
        free(s_broker_realestateassociationlicense_local_str);
        s_broker_realestateassociationlicense_local_str = NULL;
    }
    if (dt_broker_hiredate_local_str) {
        free(dt_broker_hiredate_local_str);
        dt_broker_hiredate_local_str = NULL;
    }
    if (dt_broker_leavedate_local_str) {
        free(dt_broker_leavedate_local_str);
        dt_broker_leavedate_local_str = NULL;
    }
    if (b_broker_tranquillit_local_var) {
        free(b_broker_tranquillit_local_var);
        b_broker_tranquillit_local_var = NULL;
    }
    if (b_broker_residentiallicense_local_var) {
        free(b_broker_residentiallicense_local_var);
        b_broker_residentiallicense_local_var = NULL;
    }
    if (b_broker_commerciallicense_local_var) {
        free(b_broker_commerciallicense_local_var);
        b_broker_commerciallicense_local_var = NULL;
    }
    if (b_broker_mortgagelicense_local_var) {
        free(b_broker_mortgagelicense_local_var);
        b_broker_mortgagelicense_local_var = NULL;
    }
    if (b_broker_paidbyofficetranquillit_local_var) {
        free(b_broker_paidbyofficetranquillit_local_var);
        b_broker_paidbyofficetranquillit_local_var = NULL;
    }
    if (dt_broker_fintraccertification_local_str) {
        free(dt_broker_fintraccertification_local_str);
        dt_broker_fintraccertification_local_str = NULL;
    }
    if (b_broker_isactive_local_var) {
        free(b_broker_isactive_local_var);
        b_broker_isactive_local_var = NULL;
    }
    if (s_contact_firstname_local_str) {
        free(s_contact_firstname_local_str);
        s_contact_firstname_local_str = NULL;
    }
    if (s_contact_lastname_local_str) {
        free(s_contact_lastname_local_str);
        s_contact_lastname_local_str = NULL;
    }
    if (dt_contact_birthdate_local_str) {
        free(dt_contact_birthdate_local_str);
        dt_contact_birthdate_local_str = NULL;
    }
    if (s_email_address_local_str) {
        free(s_email_address_local_str);
        s_email_address_local_str = NULL;
    }
    if (s_phone_e164_local_str) {
        free(s_phone_e164_local_str);
        s_phone_e164_local_str = NULL;
    }
    if (s_address_civic_local_str) {
        free(s_address_civic_local_str);
        s_address_civic_local_str = NULL;
    }
    if (s_address_street_local_str) {
        free(s_address_street_local_str);
        s_address_street_local_str = NULL;
    }
    if (s_address_suite_local_str) {
        free(s_address_suite_local_str);
        s_address_suite_local_str = NULL;
    }
    if (s_address_city_local_str) {
        free(s_address_city_local_str);
        s_address_city_local_str = NULL;
    }
    if (s_address_zip_local_str) {
        free(s_address_zip_local_str);
        s_address_zip_local_str = NULL;
    }
    if (fki_province_id_local_var) {
        free(fki_province_id_local_var);
        fki_province_id_local_var = NULL;
    }
    if (s_province_name_x_local_str) {
        free(s_province_name_x_local_str);
        s_province_name_x_local_str = NULL;
    }
    if (fki_country_id_local_var) {
        free(fki_country_id_local_var);
        fki_country_id_local_var = NULL;
    }
    if (s_country_name_x_local_str) {
        free(s_country_name_x_local_str);
        s_country_name_x_local_str = NULL;
    }
    return NULL;

}
