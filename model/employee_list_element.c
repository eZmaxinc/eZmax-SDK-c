#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "employee_list_element.h"



static employee_list_element_t *employee_list_element_create_internal(
    int pki_employee_id,
    int fki_department_id,
    char *s_employee_code,
    char *s_employee_internalcode,
    int b_employee_isactive,
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
    char *s_province_name_x,
    char *s_country_name_x
    ) {
    employee_list_element_t *employee_list_element_local_var = malloc(sizeof(employee_list_element_t));
    if (!employee_list_element_local_var) {
        return NULL;
    }
    employee_list_element_local_var->pki_employee_id = pki_employee_id;
    employee_list_element_local_var->fki_department_id = fki_department_id;
    employee_list_element_local_var->s_employee_code = s_employee_code;
    employee_list_element_local_var->s_employee_internalcode = s_employee_internalcode;
    employee_list_element_local_var->b_employee_isactive = b_employee_isactive;
    employee_list_element_local_var->dt_employee_hiredate = dt_employee_hiredate;
    employee_list_element_local_var->dt_employee_leavedate = dt_employee_leavedate;
    employee_list_element_local_var->s_department_name_x = s_department_name_x;
    employee_list_element_local_var->s_contact_firstname = s_contact_firstname;
    employee_list_element_local_var->s_contact_lastname = s_contact_lastname;
    employee_list_element_local_var->s_phone_e164 = s_phone_e164;
    employee_list_element_local_var->s_email_address = s_email_address;
    employee_list_element_local_var->s_address_civic = s_address_civic;
    employee_list_element_local_var->s_address_street = s_address_street;
    employee_list_element_local_var->s_address_suite = s_address_suite;
    employee_list_element_local_var->s_address_city = s_address_city;
    employee_list_element_local_var->s_address_zip = s_address_zip;
    employee_list_element_local_var->s_province_name_x = s_province_name_x;
    employee_list_element_local_var->s_country_name_x = s_country_name_x;

    employee_list_element_local_var->_library_owned = 1;
    return employee_list_element_local_var;
}

__attribute__((deprecated)) employee_list_element_t *employee_list_element_create(
    int pki_employee_id,
    int fki_department_id,
    char *s_employee_code,
    char *s_employee_internalcode,
    int b_employee_isactive,
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
    char *s_province_name_x,
    char *s_country_name_x
    ) {
    return employee_list_element_create_internal (
        pki_employee_id,
        fki_department_id,
        s_employee_code,
        s_employee_internalcode,
        b_employee_isactive,
        dt_employee_hiredate,
        dt_employee_leavedate,
        s_department_name_x,
        s_contact_firstname,
        s_contact_lastname,
        s_phone_e164,
        s_email_address,
        s_address_civic,
        s_address_street,
        s_address_suite,
        s_address_city,
        s_address_zip,
        s_province_name_x,
        s_country_name_x
        );
}

void employee_list_element_free(employee_list_element_t *employee_list_element) {
    if(NULL == employee_list_element){
        return ;
    }
    if(employee_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "employee_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (employee_list_element->s_employee_code) {
        free(employee_list_element->s_employee_code);
        employee_list_element->s_employee_code = NULL;
    }
    if (employee_list_element->s_employee_internalcode) {
        free(employee_list_element->s_employee_internalcode);
        employee_list_element->s_employee_internalcode = NULL;
    }
    if (employee_list_element->dt_employee_hiredate) {
        free(employee_list_element->dt_employee_hiredate);
        employee_list_element->dt_employee_hiredate = NULL;
    }
    if (employee_list_element->dt_employee_leavedate) {
        free(employee_list_element->dt_employee_leavedate);
        employee_list_element->dt_employee_leavedate = NULL;
    }
    if (employee_list_element->s_department_name_x) {
        free(employee_list_element->s_department_name_x);
        employee_list_element->s_department_name_x = NULL;
    }
    if (employee_list_element->s_contact_firstname) {
        free(employee_list_element->s_contact_firstname);
        employee_list_element->s_contact_firstname = NULL;
    }
    if (employee_list_element->s_contact_lastname) {
        free(employee_list_element->s_contact_lastname);
        employee_list_element->s_contact_lastname = NULL;
    }
    if (employee_list_element->s_phone_e164) {
        free(employee_list_element->s_phone_e164);
        employee_list_element->s_phone_e164 = NULL;
    }
    if (employee_list_element->s_email_address) {
        free(employee_list_element->s_email_address);
        employee_list_element->s_email_address = NULL;
    }
    if (employee_list_element->s_address_civic) {
        free(employee_list_element->s_address_civic);
        employee_list_element->s_address_civic = NULL;
    }
    if (employee_list_element->s_address_street) {
        free(employee_list_element->s_address_street);
        employee_list_element->s_address_street = NULL;
    }
    if (employee_list_element->s_address_suite) {
        free(employee_list_element->s_address_suite);
        employee_list_element->s_address_suite = NULL;
    }
    if (employee_list_element->s_address_city) {
        free(employee_list_element->s_address_city);
        employee_list_element->s_address_city = NULL;
    }
    if (employee_list_element->s_address_zip) {
        free(employee_list_element->s_address_zip);
        employee_list_element->s_address_zip = NULL;
    }
    if (employee_list_element->s_province_name_x) {
        free(employee_list_element->s_province_name_x);
        employee_list_element->s_province_name_x = NULL;
    }
    if (employee_list_element->s_country_name_x) {
        free(employee_list_element->s_country_name_x);
        employee_list_element->s_country_name_x = NULL;
    }
    free(employee_list_element);
}

cJSON *employee_list_element_convertToJSON(employee_list_element_t *employee_list_element) {
    cJSON *item = cJSON_CreateObject();

    // employee_list_element->pki_employee_id
    if (!employee_list_element->pki_employee_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEmployeeID", employee_list_element->pki_employee_id) == NULL) {
    goto fail; //Numeric
    }


    // employee_list_element->fki_department_id
    if (!employee_list_element->fki_department_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDepartmentID", employee_list_element->fki_department_id) == NULL) {
    goto fail; //Numeric
    }


    // employee_list_element->s_employee_code
    if (!employee_list_element->s_employee_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEmployeeCode", employee_list_element->s_employee_code) == NULL) {
    goto fail; //String
    }


    // employee_list_element->s_employee_internalcode
    if (!employee_list_element->s_employee_internalcode) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEmployeeInternalcode", employee_list_element->s_employee_internalcode) == NULL) {
    goto fail; //String
    }


    // employee_list_element->b_employee_isactive
    if (!employee_list_element->b_employee_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEmployeeIsactive", employee_list_element->b_employee_isactive) == NULL) {
    goto fail; //Bool
    }


    // employee_list_element->dt_employee_hiredate
    if(employee_list_element->dt_employee_hiredate) {
    if(cJSON_AddStringToObject(item, "dtEmployeeHiredate", employee_list_element->dt_employee_hiredate) == NULL) {
    goto fail; //String
    }
    }


    // employee_list_element->dt_employee_leavedate
    if(employee_list_element->dt_employee_leavedate) {
    if(cJSON_AddStringToObject(item, "dtEmployeeLeavedate", employee_list_element->dt_employee_leavedate) == NULL) {
    goto fail; //String
    }
    }


    // employee_list_element->s_department_name_x
    if(employee_list_element->s_department_name_x) {
    if(cJSON_AddStringToObject(item, "sDepartmentNameX", employee_list_element->s_department_name_x) == NULL) {
    goto fail; //String
    }
    }


    // employee_list_element->s_contact_firstname
    if(employee_list_element->s_contact_firstname) {
    if(cJSON_AddStringToObject(item, "sContactFirstname", employee_list_element->s_contact_firstname) == NULL) {
    goto fail; //String
    }
    }


    // employee_list_element->s_contact_lastname
    if(employee_list_element->s_contact_lastname) {
    if(cJSON_AddStringToObject(item, "sContactLastname", employee_list_element->s_contact_lastname) == NULL) {
    goto fail; //String
    }
    }


    // employee_list_element->s_phone_e164
    if(employee_list_element->s_phone_e164) {
    if(cJSON_AddStringToObject(item, "sPhoneE164", employee_list_element->s_phone_e164) == NULL) {
    goto fail; //String
    }
    }


    // employee_list_element->s_email_address
    if(employee_list_element->s_email_address) {
    if(cJSON_AddStringToObject(item, "sEmailAddress", employee_list_element->s_email_address) == NULL) {
    goto fail; //String
    }
    }


    // employee_list_element->s_address_civic
    if(employee_list_element->s_address_civic) {
    if(cJSON_AddStringToObject(item, "sAddressCivic", employee_list_element->s_address_civic) == NULL) {
    goto fail; //String
    }
    }


    // employee_list_element->s_address_street
    if(employee_list_element->s_address_street) {
    if(cJSON_AddStringToObject(item, "sAddressStreet", employee_list_element->s_address_street) == NULL) {
    goto fail; //String
    }
    }


    // employee_list_element->s_address_suite
    if(employee_list_element->s_address_suite) {
    if(cJSON_AddStringToObject(item, "sAddressSuite", employee_list_element->s_address_suite) == NULL) {
    goto fail; //String
    }
    }


    // employee_list_element->s_address_city
    if(employee_list_element->s_address_city) {
    if(cJSON_AddStringToObject(item, "sAddressCity", employee_list_element->s_address_city) == NULL) {
    goto fail; //String
    }
    }


    // employee_list_element->s_address_zip
    if(employee_list_element->s_address_zip) {
    if(cJSON_AddStringToObject(item, "sAddressZip", employee_list_element->s_address_zip) == NULL) {
    goto fail; //String
    }
    }


    // employee_list_element->s_province_name_x
    if(employee_list_element->s_province_name_x) {
    if(cJSON_AddStringToObject(item, "sProvinceNameX", employee_list_element->s_province_name_x) == NULL) {
    goto fail; //String
    }
    }


    // employee_list_element->s_country_name_x
    if(employee_list_element->s_country_name_x) {
    if(cJSON_AddStringToObject(item, "sCountryNameX", employee_list_element->s_country_name_x) == NULL) {
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

employee_list_element_t *employee_list_element_parseFromJSON(cJSON *employee_list_elementJSON){

    employee_list_element_t *employee_list_element_local_var = NULL;

    // employee_list_element->pki_employee_id
    cJSON *pki_employee_id = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "pkiEmployeeID");
    if (cJSON_IsNull(pki_employee_id)) {
        pki_employee_id = NULL;
    }
    if (!pki_employee_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_employee_id))
    {
    goto end; //Numeric
    }

    // employee_list_element->fki_department_id
    cJSON *fki_department_id = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "fkiDepartmentID");
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

    // employee_list_element->s_employee_code
    cJSON *s_employee_code = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "sEmployeeCode");
    if (cJSON_IsNull(s_employee_code)) {
        s_employee_code = NULL;
    }
    if (!s_employee_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_employee_code))
    {
    goto end; //String
    }

    // employee_list_element->s_employee_internalcode
    cJSON *s_employee_internalcode = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "sEmployeeInternalcode");
    if (cJSON_IsNull(s_employee_internalcode)) {
        s_employee_internalcode = NULL;
    }
    if (!s_employee_internalcode) {
        goto end;
    }

    
    if(!cJSON_IsString(s_employee_internalcode))
    {
    goto end; //String
    }

    // employee_list_element->b_employee_isactive
    cJSON *b_employee_isactive = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "bEmployeeIsactive");
    if (cJSON_IsNull(b_employee_isactive)) {
        b_employee_isactive = NULL;
    }
    if (!b_employee_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_employee_isactive))
    {
    goto end; //Bool
    }

    // employee_list_element->dt_employee_hiredate
    cJSON *dt_employee_hiredate = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "dtEmployeeHiredate");
    if (cJSON_IsNull(dt_employee_hiredate)) {
        dt_employee_hiredate = NULL;
    }
    if (dt_employee_hiredate) { 
    if(!cJSON_IsString(dt_employee_hiredate) && !cJSON_IsNull(dt_employee_hiredate))
    {
    goto end; //String
    }
    }

    // employee_list_element->dt_employee_leavedate
    cJSON *dt_employee_leavedate = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "dtEmployeeLeavedate");
    if (cJSON_IsNull(dt_employee_leavedate)) {
        dt_employee_leavedate = NULL;
    }
    if (dt_employee_leavedate) { 
    if(!cJSON_IsString(dt_employee_leavedate) && !cJSON_IsNull(dt_employee_leavedate))
    {
    goto end; //String
    }
    }

    // employee_list_element->s_department_name_x
    cJSON *s_department_name_x = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "sDepartmentNameX");
    if (cJSON_IsNull(s_department_name_x)) {
        s_department_name_x = NULL;
    }
    if (s_department_name_x) { 
    if(!cJSON_IsString(s_department_name_x) && !cJSON_IsNull(s_department_name_x))
    {
    goto end; //String
    }
    }

    // employee_list_element->s_contact_firstname
    cJSON *s_contact_firstname = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "sContactFirstname");
    if (cJSON_IsNull(s_contact_firstname)) {
        s_contact_firstname = NULL;
    }
    if (s_contact_firstname) { 
    if(!cJSON_IsString(s_contact_firstname) && !cJSON_IsNull(s_contact_firstname))
    {
    goto end; //String
    }
    }

    // employee_list_element->s_contact_lastname
    cJSON *s_contact_lastname = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "sContactLastname");
    if (cJSON_IsNull(s_contact_lastname)) {
        s_contact_lastname = NULL;
    }
    if (s_contact_lastname) { 
    if(!cJSON_IsString(s_contact_lastname) && !cJSON_IsNull(s_contact_lastname))
    {
    goto end; //String
    }
    }

    // employee_list_element->s_phone_e164
    cJSON *s_phone_e164 = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "sPhoneE164");
    if (cJSON_IsNull(s_phone_e164)) {
        s_phone_e164 = NULL;
    }
    if (s_phone_e164) { 
    if(!cJSON_IsString(s_phone_e164) && !cJSON_IsNull(s_phone_e164))
    {
    goto end; //String
    }
    }

    // employee_list_element->s_email_address
    cJSON *s_email_address = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "sEmailAddress");
    if (cJSON_IsNull(s_email_address)) {
        s_email_address = NULL;
    }
    if (s_email_address) { 
    if(!cJSON_IsString(s_email_address) && !cJSON_IsNull(s_email_address))
    {
    goto end; //String
    }
    }

    // employee_list_element->s_address_civic
    cJSON *s_address_civic = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "sAddressCivic");
    if (cJSON_IsNull(s_address_civic)) {
        s_address_civic = NULL;
    }
    if (s_address_civic) { 
    if(!cJSON_IsString(s_address_civic) && !cJSON_IsNull(s_address_civic))
    {
    goto end; //String
    }
    }

    // employee_list_element->s_address_street
    cJSON *s_address_street = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "sAddressStreet");
    if (cJSON_IsNull(s_address_street)) {
        s_address_street = NULL;
    }
    if (s_address_street) { 
    if(!cJSON_IsString(s_address_street) && !cJSON_IsNull(s_address_street))
    {
    goto end; //String
    }
    }

    // employee_list_element->s_address_suite
    cJSON *s_address_suite = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "sAddressSuite");
    if (cJSON_IsNull(s_address_suite)) {
        s_address_suite = NULL;
    }
    if (s_address_suite) { 
    if(!cJSON_IsString(s_address_suite) && !cJSON_IsNull(s_address_suite))
    {
    goto end; //String
    }
    }

    // employee_list_element->s_address_city
    cJSON *s_address_city = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "sAddressCity");
    if (cJSON_IsNull(s_address_city)) {
        s_address_city = NULL;
    }
    if (s_address_city) { 
    if(!cJSON_IsString(s_address_city) && !cJSON_IsNull(s_address_city))
    {
    goto end; //String
    }
    }

    // employee_list_element->s_address_zip
    cJSON *s_address_zip = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "sAddressZip");
    if (cJSON_IsNull(s_address_zip)) {
        s_address_zip = NULL;
    }
    if (s_address_zip) { 
    if(!cJSON_IsString(s_address_zip) && !cJSON_IsNull(s_address_zip))
    {
    goto end; //String
    }
    }

    // employee_list_element->s_province_name_x
    cJSON *s_province_name_x = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "sProvinceNameX");
    if (cJSON_IsNull(s_province_name_x)) {
        s_province_name_x = NULL;
    }
    if (s_province_name_x) { 
    if(!cJSON_IsString(s_province_name_x) && !cJSON_IsNull(s_province_name_x))
    {
    goto end; //String
    }
    }

    // employee_list_element->s_country_name_x
    cJSON *s_country_name_x = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "sCountryNameX");
    if (cJSON_IsNull(s_country_name_x)) {
        s_country_name_x = NULL;
    }
    if (s_country_name_x) { 
    if(!cJSON_IsString(s_country_name_x) && !cJSON_IsNull(s_country_name_x))
    {
    goto end; //String
    }
    }


    employee_list_element_local_var = employee_list_element_create_internal (
        pki_employee_id->valuedouble,
        fki_department_id->valuedouble,
        strdup(s_employee_code->valuestring),
        strdup(s_employee_internalcode->valuestring),
        b_employee_isactive->valueint,
        dt_employee_hiredate && !cJSON_IsNull(dt_employee_hiredate) ? strdup(dt_employee_hiredate->valuestring) : NULL,
        dt_employee_leavedate && !cJSON_IsNull(dt_employee_leavedate) ? strdup(dt_employee_leavedate->valuestring) : NULL,
        s_department_name_x && !cJSON_IsNull(s_department_name_x) ? strdup(s_department_name_x->valuestring) : NULL,
        s_contact_firstname && !cJSON_IsNull(s_contact_firstname) ? strdup(s_contact_firstname->valuestring) : NULL,
        s_contact_lastname && !cJSON_IsNull(s_contact_lastname) ? strdup(s_contact_lastname->valuestring) : NULL,
        s_phone_e164 && !cJSON_IsNull(s_phone_e164) ? strdup(s_phone_e164->valuestring) : NULL,
        s_email_address && !cJSON_IsNull(s_email_address) ? strdup(s_email_address->valuestring) : NULL,
        s_address_civic && !cJSON_IsNull(s_address_civic) ? strdup(s_address_civic->valuestring) : NULL,
        s_address_street && !cJSON_IsNull(s_address_street) ? strdup(s_address_street->valuestring) : NULL,
        s_address_suite && !cJSON_IsNull(s_address_suite) ? strdup(s_address_suite->valuestring) : NULL,
        s_address_city && !cJSON_IsNull(s_address_city) ? strdup(s_address_city->valuestring) : NULL,
        s_address_zip && !cJSON_IsNull(s_address_zip) ? strdup(s_address_zip->valuestring) : NULL,
        s_province_name_x && !cJSON_IsNull(s_province_name_x) ? strdup(s_province_name_x->valuestring) : NULL,
        s_country_name_x && !cJSON_IsNull(s_country_name_x) ? strdup(s_country_name_x->valuestring) : NULL
        );

    return employee_list_element_local_var;
end:
    return NULL;

}
