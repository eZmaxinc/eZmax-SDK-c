#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "employee_list_element.h"



static employee_list_element_t *employee_list_element_create_internal(
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
    ) {
    employee_list_element_t *employee_list_element_local_var = malloc(sizeof(employee_list_element_t));
    if (!employee_list_element_local_var) {
        return NULL;
    }
    memset(employee_list_element_local_var, 0, sizeof(employee_list_element_t));
    employee_list_element_local_var->_library_owned = 1;
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
    employee_list_element_local_var->fki_province_id = fki_province_id;
    employee_list_element_local_var->s_province_name_x = s_province_name_x;
    employee_list_element_local_var->fki_country_id = fki_country_id;
    employee_list_element_local_var->s_country_name_x = s_country_name_x;
    return employee_list_element_local_var;
}

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
    ) {
    int *pki_employee_id_copy = NULL;
    if (pki_employee_id) {
        pki_employee_id_copy = malloc(sizeof(int));
        if (pki_employee_id_copy) *pki_employee_id_copy = *pki_employee_id;
    }
    int *fki_department_id_copy = NULL;
    if (fki_department_id) {
        fki_department_id_copy = malloc(sizeof(int));
        if (fki_department_id_copy) *fki_department_id_copy = *fki_department_id;
    }
    int *b_employee_isactive_copy = NULL;
    if (b_employee_isactive) {
        b_employee_isactive_copy = malloc(sizeof(int));
        if (b_employee_isactive_copy) *b_employee_isactive_copy = *b_employee_isactive;
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
    employee_list_element_t *result = employee_list_element_create_internal (
        pki_employee_id_copy,
        fki_department_id_copy,
        s_employee_code,
        s_employee_internalcode,
        b_employee_isactive_copy,
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
        fki_province_id_copy,
        s_province_name_x,
        fki_country_id_copy,
        s_country_name_x
        );
    if (!result) {
        free(pki_employee_id_copy);
        free(fki_department_id_copy);
        free(b_employee_isactive_copy);
        free(fki_province_id_copy);
        free(fki_country_id_copy);
    }
    return result;
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
    if (employee_list_element->pki_employee_id) {
        free(employee_list_element->pki_employee_id);
        employee_list_element->pki_employee_id = NULL;
    }
    if (employee_list_element->fki_department_id) {
        free(employee_list_element->fki_department_id);
        employee_list_element->fki_department_id = NULL;
    }
    if (employee_list_element->s_employee_code) {
        free(employee_list_element->s_employee_code);
        employee_list_element->s_employee_code = NULL;
    }
    if (employee_list_element->s_employee_internalcode) {
        free(employee_list_element->s_employee_internalcode);
        employee_list_element->s_employee_internalcode = NULL;
    }
    if (employee_list_element->b_employee_isactive) {
        free(employee_list_element->b_employee_isactive);
        employee_list_element->b_employee_isactive = NULL;
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
    if (employee_list_element->fki_province_id) {
        free(employee_list_element->fki_province_id);
        employee_list_element->fki_province_id = NULL;
    }
    if (employee_list_element->s_province_name_x) {
        free(employee_list_element->s_province_name_x);
        employee_list_element->s_province_name_x = NULL;
    }
    if (employee_list_element->fki_country_id) {
        free(employee_list_element->fki_country_id);
        employee_list_element->fki_country_id = NULL;
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
    if(cJSON_AddNumberToObject(item, "pkiEmployeeID", *employee_list_element->pki_employee_id) == NULL) {
    goto fail; //Numeric
    }


    // employee_list_element->fki_department_id
    if (!employee_list_element->fki_department_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDepartmentID", *employee_list_element->fki_department_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bEmployeeIsactive", *employee_list_element->b_employee_isactive) == NULL) {
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


    // employee_list_element->fki_province_id
    if(employee_list_element->fki_province_id) {
    if(cJSON_AddNumberToObject(item, "fkiProvinceID", *employee_list_element->fki_province_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // employee_list_element->s_province_name_x
    if(employee_list_element->s_province_name_x) {
    if(cJSON_AddStringToObject(item, "sProvinceNameX", employee_list_element->s_province_name_x) == NULL) {
    goto fail; //String
    }
    }


    // employee_list_element->fki_country_id
    if(employee_list_element->fki_country_id) {
    if(cJSON_AddNumberToObject(item, "fkiCountryID", *employee_list_element->fki_country_id) == NULL) {
    goto fail; //Numeric
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

    // define the local variable for employee_list_element->pki_employee_id
    int *pki_employee_id_local_var = NULL;

    // define the local variable for employee_list_element->fki_department_id
    int *fki_department_id_local_var = NULL;

    char *s_employee_code_local_str = NULL;

    char *s_employee_internalcode_local_str = NULL;

    // define the local variable for employee_list_element->b_employee_isactive
    int *b_employee_isactive_local_var = NULL;

    char *dt_employee_hiredate_local_str = NULL;

    char *dt_employee_leavedate_local_str = NULL;

    char *s_department_name_x_local_str = NULL;

    char *s_contact_firstname_local_str = NULL;

    char *s_contact_lastname_local_str = NULL;

    char *s_phone_e164_local_str = NULL;

    char *s_email_address_local_str = NULL;

    char *s_address_civic_local_str = NULL;

    char *s_address_street_local_str = NULL;

    char *s_address_suite_local_str = NULL;

    char *s_address_city_local_str = NULL;

    char *s_address_zip_local_str = NULL;

    // define the local variable for employee_list_element->fki_province_id
    int *fki_province_id_local_var = NULL;

    char *s_province_name_x_local_str = NULL;

    // define the local variable for employee_list_element->fki_country_id
    int *fki_country_id_local_var = NULL;

    char *s_country_name_x_local_str = NULL;

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
    pki_employee_id_local_var = malloc(sizeof(int));
    if(!pki_employee_id_local_var)
    {
        goto end;
    }
    *pki_employee_id_local_var = pki_employee_id->valuedouble;

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
    fki_department_id_local_var = malloc(sizeof(int));
    if(!fki_department_id_local_var)
    {
        goto end;
    }
    *fki_department_id_local_var = fki_department_id->valuedouble;

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
    b_employee_isactive_local_var = malloc(sizeof(int));
    if(!b_employee_isactive_local_var)
    {
        goto end;
    }
    *b_employee_isactive_local_var = b_employee_isactive->valueint;

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

    // employee_list_element->fki_province_id
    cJSON *fki_province_id = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "fkiProvinceID");
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

    // employee_list_element->fki_country_id
    cJSON *fki_country_id = cJSON_GetObjectItemCaseSensitive(employee_list_elementJSON, "fkiCountryID");
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


    if (s_employee_code && !cJSON_IsNull(s_employee_code)) s_employee_code_local_str = strdup(s_employee_code->valuestring);
    if (s_employee_internalcode && !cJSON_IsNull(s_employee_internalcode)) s_employee_internalcode_local_str = strdup(s_employee_internalcode->valuestring);
    if (dt_employee_hiredate && !cJSON_IsNull(dt_employee_hiredate)) dt_employee_hiredate_local_str = strdup(dt_employee_hiredate->valuestring);
    if (dt_employee_leavedate && !cJSON_IsNull(dt_employee_leavedate)) dt_employee_leavedate_local_str = strdup(dt_employee_leavedate->valuestring);
    if (s_department_name_x && !cJSON_IsNull(s_department_name_x)) s_department_name_x_local_str = strdup(s_department_name_x->valuestring);
    if (s_contact_firstname && !cJSON_IsNull(s_contact_firstname)) s_contact_firstname_local_str = strdup(s_contact_firstname->valuestring);
    if (s_contact_lastname && !cJSON_IsNull(s_contact_lastname)) s_contact_lastname_local_str = strdup(s_contact_lastname->valuestring);
    if (s_phone_e164 && !cJSON_IsNull(s_phone_e164)) s_phone_e164_local_str = strdup(s_phone_e164->valuestring);
    if (s_email_address && !cJSON_IsNull(s_email_address)) s_email_address_local_str = strdup(s_email_address->valuestring);
    if (s_address_civic && !cJSON_IsNull(s_address_civic)) s_address_civic_local_str = strdup(s_address_civic->valuestring);
    if (s_address_street && !cJSON_IsNull(s_address_street)) s_address_street_local_str = strdup(s_address_street->valuestring);
    if (s_address_suite && !cJSON_IsNull(s_address_suite)) s_address_suite_local_str = strdup(s_address_suite->valuestring);
    if (s_address_city && !cJSON_IsNull(s_address_city)) s_address_city_local_str = strdup(s_address_city->valuestring);
    if (s_address_zip && !cJSON_IsNull(s_address_zip)) s_address_zip_local_str = strdup(s_address_zip->valuestring);
    if (s_province_name_x && !cJSON_IsNull(s_province_name_x)) s_province_name_x_local_str = strdup(s_province_name_x->valuestring);
    if (s_country_name_x && !cJSON_IsNull(s_country_name_x)) s_country_name_x_local_str = strdup(s_country_name_x->valuestring);

    employee_list_element_local_var = employee_list_element_create_internal (
        pki_employee_id_local_var,
        fki_department_id_local_var,
        s_employee_code_local_str,
        s_employee_internalcode_local_str,
        b_employee_isactive_local_var,
        dt_employee_hiredate_local_str,
        dt_employee_leavedate_local_str,
        s_department_name_x_local_str,
        s_contact_firstname_local_str,
        s_contact_lastname_local_str,
        s_phone_e164_local_str,
        s_email_address_local_str,
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

    if (!employee_list_element_local_var) {
        goto end;
    }

    return employee_list_element_local_var;
end:
    if (pki_employee_id_local_var) {
        free(pki_employee_id_local_var);
        pki_employee_id_local_var = NULL;
    }
    if (fki_department_id_local_var) {
        free(fki_department_id_local_var);
        fki_department_id_local_var = NULL;
    }
    if (s_employee_code_local_str) {
        free(s_employee_code_local_str);
        s_employee_code_local_str = NULL;
    }
    if (s_employee_internalcode_local_str) {
        free(s_employee_internalcode_local_str);
        s_employee_internalcode_local_str = NULL;
    }
    if (b_employee_isactive_local_var) {
        free(b_employee_isactive_local_var);
        b_employee_isactive_local_var = NULL;
    }
    if (dt_employee_hiredate_local_str) {
        free(dt_employee_hiredate_local_str);
        dt_employee_hiredate_local_str = NULL;
    }
    if (dt_employee_leavedate_local_str) {
        free(dt_employee_leavedate_local_str);
        dt_employee_leavedate_local_str = NULL;
    }
    if (s_department_name_x_local_str) {
        free(s_department_name_x_local_str);
        s_department_name_x_local_str = NULL;
    }
    if (s_contact_firstname_local_str) {
        free(s_contact_firstname_local_str);
        s_contact_firstname_local_str = NULL;
    }
    if (s_contact_lastname_local_str) {
        free(s_contact_lastname_local_str);
        s_contact_lastname_local_str = NULL;
    }
    if (s_phone_e164_local_str) {
        free(s_phone_e164_local_str);
        s_phone_e164_local_str = NULL;
    }
    if (s_email_address_local_str) {
        free(s_email_address_local_str);
        s_email_address_local_str = NULL;
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
