#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documentation_subscribe_v1_request.h"



static documentation_subscribe_v1_request_t *documentation_subscribe_v1_request_create_internal(
    char *pks_ezmaxcustomer_code,
    char *s_infrastructureenvironmenttype_description,
    char *s_company_name1,
    char *s_company_name2,
    int *fki_systemconfigurationtype_id,
    char *s_systemconfigurationtype_description1,
    char *s_systemconfigurationtype_description2,
    int *fki_ezmaxpartner_id,
    char *s_ezmaxpartner_name1,
    char *s_ezmaxpartner_name2,
    int *fki_ezmaxpartnerproduct_id,
    char *s_ezmaxpartnerproduct_name1,
    char *s_ezmaxpartnerproduct_name2,
    int *fki_ezmaxpartnerproductstage_id,
    char *s_ezmaxpartnerproductstage_code,
    char *s_user_login_name,
    char *s_user_first_name,
    char *s_user_last_name,
    int *fki_user_id,
    int *fki_language_id,
    address_request_compound_t *obj_address,
    phone_request_compound_v2_t *objphone,
    email_request_compound_t *obj_email
    ) {
    documentation_subscribe_v1_request_t *documentation_subscribe_v1_request_local_var = malloc(sizeof(documentation_subscribe_v1_request_t));
    if (!documentation_subscribe_v1_request_local_var) {
        return NULL;
    }
    memset(documentation_subscribe_v1_request_local_var, 0, sizeof(documentation_subscribe_v1_request_t));
    documentation_subscribe_v1_request_local_var->_library_owned = 1;
    documentation_subscribe_v1_request_local_var->pks_ezmaxcustomer_code = pks_ezmaxcustomer_code;
    documentation_subscribe_v1_request_local_var->s_infrastructureenvironmenttype_description = s_infrastructureenvironmenttype_description;
    documentation_subscribe_v1_request_local_var->s_company_name1 = s_company_name1;
    documentation_subscribe_v1_request_local_var->s_company_name2 = s_company_name2;
    documentation_subscribe_v1_request_local_var->fki_systemconfigurationtype_id = fki_systemconfigurationtype_id;
    documentation_subscribe_v1_request_local_var->s_systemconfigurationtype_description1 = s_systemconfigurationtype_description1;
    documentation_subscribe_v1_request_local_var->s_systemconfigurationtype_description2 = s_systemconfigurationtype_description2;
    documentation_subscribe_v1_request_local_var->fki_ezmaxpartner_id = fki_ezmaxpartner_id;
    documentation_subscribe_v1_request_local_var->s_ezmaxpartner_name1 = s_ezmaxpartner_name1;
    documentation_subscribe_v1_request_local_var->s_ezmaxpartner_name2 = s_ezmaxpartner_name2;
    documentation_subscribe_v1_request_local_var->fki_ezmaxpartnerproduct_id = fki_ezmaxpartnerproduct_id;
    documentation_subscribe_v1_request_local_var->s_ezmaxpartnerproduct_name1 = s_ezmaxpartnerproduct_name1;
    documentation_subscribe_v1_request_local_var->s_ezmaxpartnerproduct_name2 = s_ezmaxpartnerproduct_name2;
    documentation_subscribe_v1_request_local_var->fki_ezmaxpartnerproductstage_id = fki_ezmaxpartnerproductstage_id;
    documentation_subscribe_v1_request_local_var->s_ezmaxpartnerproductstage_code = s_ezmaxpartnerproductstage_code;
    documentation_subscribe_v1_request_local_var->s_user_login_name = s_user_login_name;
    documentation_subscribe_v1_request_local_var->s_user_first_name = s_user_first_name;
    documentation_subscribe_v1_request_local_var->s_user_last_name = s_user_last_name;
    documentation_subscribe_v1_request_local_var->fki_user_id = fki_user_id;
    documentation_subscribe_v1_request_local_var->fki_language_id = fki_language_id;
    documentation_subscribe_v1_request_local_var->obj_address = obj_address;
    documentation_subscribe_v1_request_local_var->objphone = objphone;
    documentation_subscribe_v1_request_local_var->obj_email = obj_email;
    return documentation_subscribe_v1_request_local_var;
}

__attribute__((deprecated)) documentation_subscribe_v1_request_t *documentation_subscribe_v1_request_create(
    char *pks_ezmaxcustomer_code,
    char *s_infrastructureenvironmenttype_description,
    char *s_company_name1,
    char *s_company_name2,
    int *fki_systemconfigurationtype_id,
    char *s_systemconfigurationtype_description1,
    char *s_systemconfigurationtype_description2,
    int *fki_ezmaxpartner_id,
    char *s_ezmaxpartner_name1,
    char *s_ezmaxpartner_name2,
    int *fki_ezmaxpartnerproduct_id,
    char *s_ezmaxpartnerproduct_name1,
    char *s_ezmaxpartnerproduct_name2,
    int *fki_ezmaxpartnerproductstage_id,
    char *s_ezmaxpartnerproductstage_code,
    char *s_user_login_name,
    char *s_user_first_name,
    char *s_user_last_name,
    int *fki_user_id,
    int *fki_language_id,
    address_request_compound_t *obj_address,
    phone_request_compound_v2_t *objphone,
    email_request_compound_t *obj_email
    ) {
    int *fki_systemconfigurationtype_id_copy = NULL;
    if (fki_systemconfigurationtype_id) {
        fki_systemconfigurationtype_id_copy = malloc(sizeof(int));
        if (fki_systemconfigurationtype_id_copy) *fki_systemconfigurationtype_id_copy = *fki_systemconfigurationtype_id;
    }
    int *fki_ezmaxpartner_id_copy = NULL;
    if (fki_ezmaxpartner_id) {
        fki_ezmaxpartner_id_copy = malloc(sizeof(int));
        if (fki_ezmaxpartner_id_copy) *fki_ezmaxpartner_id_copy = *fki_ezmaxpartner_id;
    }
    int *fki_ezmaxpartnerproduct_id_copy = NULL;
    if (fki_ezmaxpartnerproduct_id) {
        fki_ezmaxpartnerproduct_id_copy = malloc(sizeof(int));
        if (fki_ezmaxpartnerproduct_id_copy) *fki_ezmaxpartnerproduct_id_copy = *fki_ezmaxpartnerproduct_id;
    }
    int *fki_ezmaxpartnerproductstage_id_copy = NULL;
    if (fki_ezmaxpartnerproductstage_id) {
        fki_ezmaxpartnerproductstage_id_copy = malloc(sizeof(int));
        if (fki_ezmaxpartnerproductstage_id_copy) *fki_ezmaxpartnerproductstage_id_copy = *fki_ezmaxpartnerproductstage_id;
    }
    int *fki_user_id_copy = NULL;
    if (fki_user_id) {
        fki_user_id_copy = malloc(sizeof(int));
        if (fki_user_id_copy) *fki_user_id_copy = *fki_user_id;
    }
    int *fki_language_id_copy = NULL;
    if (fki_language_id) {
        fki_language_id_copy = malloc(sizeof(int));
        if (fki_language_id_copy) *fki_language_id_copy = *fki_language_id;
    }
    documentation_subscribe_v1_request_t *result = documentation_subscribe_v1_request_create_internal (
        pks_ezmaxcustomer_code,
        s_infrastructureenvironmenttype_description,
        s_company_name1,
        s_company_name2,
        fki_systemconfigurationtype_id_copy,
        s_systemconfigurationtype_description1,
        s_systemconfigurationtype_description2,
        fki_ezmaxpartner_id_copy,
        s_ezmaxpartner_name1,
        s_ezmaxpartner_name2,
        fki_ezmaxpartnerproduct_id_copy,
        s_ezmaxpartnerproduct_name1,
        s_ezmaxpartnerproduct_name2,
        fki_ezmaxpartnerproductstage_id_copy,
        s_ezmaxpartnerproductstage_code,
        s_user_login_name,
        s_user_first_name,
        s_user_last_name,
        fki_user_id_copy,
        fki_language_id_copy,
        obj_address,
        objphone,
        obj_email
        );
    if (!result) {
        free(fki_systemconfigurationtype_id_copy);
        free(fki_ezmaxpartner_id_copy);
        free(fki_ezmaxpartnerproduct_id_copy);
        free(fki_ezmaxpartnerproductstage_id_copy);
        free(fki_user_id_copy);
        free(fki_language_id_copy);
    }
    return result;
}

void documentation_subscribe_v1_request_free(documentation_subscribe_v1_request_t *documentation_subscribe_v1_request) {
    if(NULL == documentation_subscribe_v1_request){
        return ;
    }
    if(documentation_subscribe_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documentation_subscribe_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documentation_subscribe_v1_request->pks_ezmaxcustomer_code) {
        free(documentation_subscribe_v1_request->pks_ezmaxcustomer_code);
        documentation_subscribe_v1_request->pks_ezmaxcustomer_code = NULL;
    }
    if (documentation_subscribe_v1_request->s_infrastructureenvironmenttype_description) {
        free(documentation_subscribe_v1_request->s_infrastructureenvironmenttype_description);
        documentation_subscribe_v1_request->s_infrastructureenvironmenttype_description = NULL;
    }
    if (documentation_subscribe_v1_request->s_company_name1) {
        free(documentation_subscribe_v1_request->s_company_name1);
        documentation_subscribe_v1_request->s_company_name1 = NULL;
    }
    if (documentation_subscribe_v1_request->s_company_name2) {
        free(documentation_subscribe_v1_request->s_company_name2);
        documentation_subscribe_v1_request->s_company_name2 = NULL;
    }
    if (documentation_subscribe_v1_request->fki_systemconfigurationtype_id) {
        free(documentation_subscribe_v1_request->fki_systemconfigurationtype_id);
        documentation_subscribe_v1_request->fki_systemconfigurationtype_id = NULL;
    }
    if (documentation_subscribe_v1_request->s_systemconfigurationtype_description1) {
        free(documentation_subscribe_v1_request->s_systemconfigurationtype_description1);
        documentation_subscribe_v1_request->s_systemconfigurationtype_description1 = NULL;
    }
    if (documentation_subscribe_v1_request->s_systemconfigurationtype_description2) {
        free(documentation_subscribe_v1_request->s_systemconfigurationtype_description2);
        documentation_subscribe_v1_request->s_systemconfigurationtype_description2 = NULL;
    }
    if (documentation_subscribe_v1_request->fki_ezmaxpartner_id) {
        free(documentation_subscribe_v1_request->fki_ezmaxpartner_id);
        documentation_subscribe_v1_request->fki_ezmaxpartner_id = NULL;
    }
    if (documentation_subscribe_v1_request->s_ezmaxpartner_name1) {
        free(documentation_subscribe_v1_request->s_ezmaxpartner_name1);
        documentation_subscribe_v1_request->s_ezmaxpartner_name1 = NULL;
    }
    if (documentation_subscribe_v1_request->s_ezmaxpartner_name2) {
        free(documentation_subscribe_v1_request->s_ezmaxpartner_name2);
        documentation_subscribe_v1_request->s_ezmaxpartner_name2 = NULL;
    }
    if (documentation_subscribe_v1_request->fki_ezmaxpartnerproduct_id) {
        free(documentation_subscribe_v1_request->fki_ezmaxpartnerproduct_id);
        documentation_subscribe_v1_request->fki_ezmaxpartnerproduct_id = NULL;
    }
    if (documentation_subscribe_v1_request->s_ezmaxpartnerproduct_name1) {
        free(documentation_subscribe_v1_request->s_ezmaxpartnerproduct_name1);
        documentation_subscribe_v1_request->s_ezmaxpartnerproduct_name1 = NULL;
    }
    if (documentation_subscribe_v1_request->s_ezmaxpartnerproduct_name2) {
        free(documentation_subscribe_v1_request->s_ezmaxpartnerproduct_name2);
        documentation_subscribe_v1_request->s_ezmaxpartnerproduct_name2 = NULL;
    }
    if (documentation_subscribe_v1_request->fki_ezmaxpartnerproductstage_id) {
        free(documentation_subscribe_v1_request->fki_ezmaxpartnerproductstage_id);
        documentation_subscribe_v1_request->fki_ezmaxpartnerproductstage_id = NULL;
    }
    if (documentation_subscribe_v1_request->s_ezmaxpartnerproductstage_code) {
        free(documentation_subscribe_v1_request->s_ezmaxpartnerproductstage_code);
        documentation_subscribe_v1_request->s_ezmaxpartnerproductstage_code = NULL;
    }
    if (documentation_subscribe_v1_request->s_user_login_name) {
        free(documentation_subscribe_v1_request->s_user_login_name);
        documentation_subscribe_v1_request->s_user_login_name = NULL;
    }
    if (documentation_subscribe_v1_request->s_user_first_name) {
        free(documentation_subscribe_v1_request->s_user_first_name);
        documentation_subscribe_v1_request->s_user_first_name = NULL;
    }
    if (documentation_subscribe_v1_request->s_user_last_name) {
        free(documentation_subscribe_v1_request->s_user_last_name);
        documentation_subscribe_v1_request->s_user_last_name = NULL;
    }
    if (documentation_subscribe_v1_request->fki_user_id) {
        free(documentation_subscribe_v1_request->fki_user_id);
        documentation_subscribe_v1_request->fki_user_id = NULL;
    }
    if (documentation_subscribe_v1_request->fki_language_id) {
        free(documentation_subscribe_v1_request->fki_language_id);
        documentation_subscribe_v1_request->fki_language_id = NULL;
    }
    if (documentation_subscribe_v1_request->obj_address) {
        address_request_compound_free(documentation_subscribe_v1_request->obj_address);
        documentation_subscribe_v1_request->obj_address = NULL;
    }
    if (documentation_subscribe_v1_request->objphone) {
        phone_request_compound_v2_free(documentation_subscribe_v1_request->objphone);
        documentation_subscribe_v1_request->objphone = NULL;
    }
    if (documentation_subscribe_v1_request->obj_email) {
        email_request_compound_free(documentation_subscribe_v1_request->obj_email);
        documentation_subscribe_v1_request->obj_email = NULL;
    }
    free(documentation_subscribe_v1_request);
}

cJSON *documentation_subscribe_v1_request_convertToJSON(documentation_subscribe_v1_request_t *documentation_subscribe_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // documentation_subscribe_v1_request->pks_ezmaxcustomer_code
    if(documentation_subscribe_v1_request->pks_ezmaxcustomer_code) {
    if(cJSON_AddStringToObject(item, "pksEzmaxcustomerCode", documentation_subscribe_v1_request->pks_ezmaxcustomer_code) == NULL) {
    goto fail; //String
    }
    }


    // documentation_subscribe_v1_request->s_infrastructureenvironmenttype_description
    if(documentation_subscribe_v1_request->s_infrastructureenvironmenttype_description) {
    if(cJSON_AddStringToObject(item, "sInfrastructureenvironmenttypeDescription", documentation_subscribe_v1_request->s_infrastructureenvironmenttype_description) == NULL) {
    goto fail; //String
    }
    }


    // documentation_subscribe_v1_request->s_company_name1
    if(documentation_subscribe_v1_request->s_company_name1) {
    if(cJSON_AddStringToObject(item, "sCompanyName1", documentation_subscribe_v1_request->s_company_name1) == NULL) {
    goto fail; //String
    }
    }


    // documentation_subscribe_v1_request->s_company_name2
    if(documentation_subscribe_v1_request->s_company_name2) {
    if(cJSON_AddStringToObject(item, "sCompanyName2", documentation_subscribe_v1_request->s_company_name2) == NULL) {
    goto fail; //String
    }
    }


    // documentation_subscribe_v1_request->fki_systemconfigurationtype_id
    if(documentation_subscribe_v1_request->fki_systemconfigurationtype_id) {
    if(cJSON_AddNumberToObject(item, "fkiSystemconfigurationtypeID", *documentation_subscribe_v1_request->fki_systemconfigurationtype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documentation_subscribe_v1_request->s_systemconfigurationtype_description1
    if(documentation_subscribe_v1_request->s_systemconfigurationtype_description1) {
    if(cJSON_AddStringToObject(item, "sSystemconfigurationtypeDescription1", documentation_subscribe_v1_request->s_systemconfigurationtype_description1) == NULL) {
    goto fail; //String
    }
    }


    // documentation_subscribe_v1_request->s_systemconfigurationtype_description2
    if(documentation_subscribe_v1_request->s_systemconfigurationtype_description2) {
    if(cJSON_AddStringToObject(item, "sSystemconfigurationtypeDescription2", documentation_subscribe_v1_request->s_systemconfigurationtype_description2) == NULL) {
    goto fail; //String
    }
    }


    // documentation_subscribe_v1_request->fki_ezmaxpartner_id
    if(documentation_subscribe_v1_request->fki_ezmaxpartner_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxpartnerID", *documentation_subscribe_v1_request->fki_ezmaxpartner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documentation_subscribe_v1_request->s_ezmaxpartner_name1
    if(documentation_subscribe_v1_request->s_ezmaxpartner_name1) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerName1", documentation_subscribe_v1_request->s_ezmaxpartner_name1) == NULL) {
    goto fail; //String
    }
    }


    // documentation_subscribe_v1_request->s_ezmaxpartner_name2
    if(documentation_subscribe_v1_request->s_ezmaxpartner_name2) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerName2", documentation_subscribe_v1_request->s_ezmaxpartner_name2) == NULL) {
    goto fail; //String
    }
    }


    // documentation_subscribe_v1_request->fki_ezmaxpartnerproduct_id
    if(documentation_subscribe_v1_request->fki_ezmaxpartnerproduct_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxpartnerproductID", *documentation_subscribe_v1_request->fki_ezmaxpartnerproduct_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documentation_subscribe_v1_request->s_ezmaxpartnerproduct_name1
    if(documentation_subscribe_v1_request->s_ezmaxpartnerproduct_name1) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerproductName1", documentation_subscribe_v1_request->s_ezmaxpartnerproduct_name1) == NULL) {
    goto fail; //String
    }
    }


    // documentation_subscribe_v1_request->s_ezmaxpartnerproduct_name2
    if(documentation_subscribe_v1_request->s_ezmaxpartnerproduct_name2) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerproductName2", documentation_subscribe_v1_request->s_ezmaxpartnerproduct_name2) == NULL) {
    goto fail; //String
    }
    }


    // documentation_subscribe_v1_request->fki_ezmaxpartnerproductstage_id
    if(documentation_subscribe_v1_request->fki_ezmaxpartnerproductstage_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxpartnerproductstageID", *documentation_subscribe_v1_request->fki_ezmaxpartnerproductstage_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documentation_subscribe_v1_request->s_ezmaxpartnerproductstage_code
    if(documentation_subscribe_v1_request->s_ezmaxpartnerproductstage_code) {
    if(cJSON_AddStringToObject(item, "sEzmaxpartnerproductstageCode", documentation_subscribe_v1_request->s_ezmaxpartnerproductstage_code) == NULL) {
    goto fail; //String
    }
    }


    // documentation_subscribe_v1_request->s_user_login_name
    if(documentation_subscribe_v1_request->s_user_login_name) {
    if(cJSON_AddStringToObject(item, "sUserLoginName", documentation_subscribe_v1_request->s_user_login_name) == NULL) {
    goto fail; //String
    }
    }


    // documentation_subscribe_v1_request->s_user_first_name
    if(documentation_subscribe_v1_request->s_user_first_name) {
    if(cJSON_AddStringToObject(item, "sUserFirstName", documentation_subscribe_v1_request->s_user_first_name) == NULL) {
    goto fail; //String
    }
    }


    // documentation_subscribe_v1_request->s_user_last_name
    if(documentation_subscribe_v1_request->s_user_last_name) {
    if(cJSON_AddStringToObject(item, "sUserLastName", documentation_subscribe_v1_request->s_user_last_name) == NULL) {
    goto fail; //String
    }
    }


    // documentation_subscribe_v1_request->fki_user_id
    if(documentation_subscribe_v1_request->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", *documentation_subscribe_v1_request->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documentation_subscribe_v1_request->fki_language_id
    if(documentation_subscribe_v1_request->fki_language_id) {
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", *documentation_subscribe_v1_request->fki_language_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documentation_subscribe_v1_request->obj_address
    if(documentation_subscribe_v1_request->obj_address) {
    cJSON *obj_address_local_JSON = address_request_compound_convertToJSON(documentation_subscribe_v1_request->obj_address);
    if(obj_address_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAddress", obj_address_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // documentation_subscribe_v1_request->objphone
    if(documentation_subscribe_v1_request->objphone) {
    cJSON *objphone_local_JSON = phone_request_compound_v2_convertToJSON(documentation_subscribe_v1_request->objphone);
    if(objphone_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objphone", objphone_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // documentation_subscribe_v1_request->obj_email
    if(documentation_subscribe_v1_request->obj_email) {
    cJSON *obj_email_local_JSON = email_request_compound_convertToJSON(documentation_subscribe_v1_request->obj_email);
    if(obj_email_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEmail", obj_email_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

documentation_subscribe_v1_request_t *documentation_subscribe_v1_request_parseFromJSON(cJSON *documentation_subscribe_v1_requestJSON){

    documentation_subscribe_v1_request_t *documentation_subscribe_v1_request_local_var = NULL;

    char *pks_ezmaxcustomer_code_local_str = NULL;

    char *s_infrastructureenvironmenttype_description_local_str = NULL;

    char *s_company_name1_local_str = NULL;

    char *s_company_name2_local_str = NULL;

    // define the local variable for documentation_subscribe_v1_request->fki_systemconfigurationtype_id
    int *fki_systemconfigurationtype_id_local_var = NULL;

    char *s_systemconfigurationtype_description1_local_str = NULL;

    char *s_systemconfigurationtype_description2_local_str = NULL;

    // define the local variable for documentation_subscribe_v1_request->fki_ezmaxpartner_id
    int *fki_ezmaxpartner_id_local_var = NULL;

    char *s_ezmaxpartner_name1_local_str = NULL;

    char *s_ezmaxpartner_name2_local_str = NULL;

    // define the local variable for documentation_subscribe_v1_request->fki_ezmaxpartnerproduct_id
    int *fki_ezmaxpartnerproduct_id_local_var = NULL;

    char *s_ezmaxpartnerproduct_name1_local_str = NULL;

    char *s_ezmaxpartnerproduct_name2_local_str = NULL;

    // define the local variable for documentation_subscribe_v1_request->fki_ezmaxpartnerproductstage_id
    int *fki_ezmaxpartnerproductstage_id_local_var = NULL;

    char *s_ezmaxpartnerproductstage_code_local_str = NULL;

    char *s_user_login_name_local_str = NULL;

    char *s_user_first_name_local_str = NULL;

    char *s_user_last_name_local_str = NULL;

    // define the local variable for documentation_subscribe_v1_request->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for documentation_subscribe_v1_request->fki_language_id
    int *fki_language_id_local_var = NULL;

    // define the local variable for documentation_subscribe_v1_request->obj_address
    address_request_compound_t *obj_address_local_nonprim = NULL;

    // define the local variable for documentation_subscribe_v1_request->objphone
    phone_request_compound_v2_t *objphone_local_nonprim = NULL;

    // define the local variable for documentation_subscribe_v1_request->obj_email
    email_request_compound_t *obj_email_local_nonprim = NULL;

    // documentation_subscribe_v1_request->pks_ezmaxcustomer_code
    cJSON *pks_ezmaxcustomer_code = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "pksEzmaxcustomerCode");
    if (cJSON_IsNull(pks_ezmaxcustomer_code)) {
        pks_ezmaxcustomer_code = NULL;
    }
    if (pks_ezmaxcustomer_code) { 
    if(!cJSON_IsString(pks_ezmaxcustomer_code) && !cJSON_IsNull(pks_ezmaxcustomer_code))
    {
    goto end; //String
    }
    }

    // documentation_subscribe_v1_request->s_infrastructureenvironmenttype_description
    cJSON *s_infrastructureenvironmenttype_description = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "sInfrastructureenvironmenttypeDescription");
    if (cJSON_IsNull(s_infrastructureenvironmenttype_description)) {
        s_infrastructureenvironmenttype_description = NULL;
    }
    if (s_infrastructureenvironmenttype_description) { 
    if(!cJSON_IsString(s_infrastructureenvironmenttype_description) && !cJSON_IsNull(s_infrastructureenvironmenttype_description))
    {
    goto end; //String
    }
    }

    // documentation_subscribe_v1_request->s_company_name1
    cJSON *s_company_name1 = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "sCompanyName1");
    if (cJSON_IsNull(s_company_name1)) {
        s_company_name1 = NULL;
    }
    if (s_company_name1) { 
    if(!cJSON_IsString(s_company_name1) && !cJSON_IsNull(s_company_name1))
    {
    goto end; //String
    }
    }

    // documentation_subscribe_v1_request->s_company_name2
    cJSON *s_company_name2 = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "sCompanyName2");
    if (cJSON_IsNull(s_company_name2)) {
        s_company_name2 = NULL;
    }
    if (s_company_name2) { 
    if(!cJSON_IsString(s_company_name2) && !cJSON_IsNull(s_company_name2))
    {
    goto end; //String
    }
    }

    // documentation_subscribe_v1_request->fki_systemconfigurationtype_id
    cJSON *fki_systemconfigurationtype_id = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "fkiSystemconfigurationtypeID");
    if (cJSON_IsNull(fki_systemconfigurationtype_id)) {
        fki_systemconfigurationtype_id = NULL;
    }
    if (fki_systemconfigurationtype_id) { 
    if(!cJSON_IsNumber(fki_systemconfigurationtype_id))
    {
    goto end; //Numeric
    }
    fki_systemconfigurationtype_id_local_var = malloc(sizeof(int));
    if(!fki_systemconfigurationtype_id_local_var)
    {
        goto end;
    }
    *fki_systemconfigurationtype_id_local_var = fki_systemconfigurationtype_id->valuedouble;
    }

    // documentation_subscribe_v1_request->s_systemconfigurationtype_description1
    cJSON *s_systemconfigurationtype_description1 = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "sSystemconfigurationtypeDescription1");
    if (cJSON_IsNull(s_systemconfigurationtype_description1)) {
        s_systemconfigurationtype_description1 = NULL;
    }
    if (s_systemconfigurationtype_description1) { 
    if(!cJSON_IsString(s_systemconfigurationtype_description1) && !cJSON_IsNull(s_systemconfigurationtype_description1))
    {
    goto end; //String
    }
    }

    // documentation_subscribe_v1_request->s_systemconfigurationtype_description2
    cJSON *s_systemconfigurationtype_description2 = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "sSystemconfigurationtypeDescription2");
    if (cJSON_IsNull(s_systemconfigurationtype_description2)) {
        s_systemconfigurationtype_description2 = NULL;
    }
    if (s_systemconfigurationtype_description2) { 
    if(!cJSON_IsString(s_systemconfigurationtype_description2) && !cJSON_IsNull(s_systemconfigurationtype_description2))
    {
    goto end; //String
    }
    }

    // documentation_subscribe_v1_request->fki_ezmaxpartner_id
    cJSON *fki_ezmaxpartner_id = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "fkiEzmaxpartnerID");
    if (cJSON_IsNull(fki_ezmaxpartner_id)) {
        fki_ezmaxpartner_id = NULL;
    }
    if (fki_ezmaxpartner_id) { 
    if(!cJSON_IsNumber(fki_ezmaxpartner_id))
    {
    goto end; //Numeric
    }
    fki_ezmaxpartner_id_local_var = malloc(sizeof(int));
    if(!fki_ezmaxpartner_id_local_var)
    {
        goto end;
    }
    *fki_ezmaxpartner_id_local_var = fki_ezmaxpartner_id->valuedouble;
    }

    // documentation_subscribe_v1_request->s_ezmaxpartner_name1
    cJSON *s_ezmaxpartner_name1 = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "sEzmaxpartnerName1");
    if (cJSON_IsNull(s_ezmaxpartner_name1)) {
        s_ezmaxpartner_name1 = NULL;
    }
    if (s_ezmaxpartner_name1) { 
    if(!cJSON_IsString(s_ezmaxpartner_name1) && !cJSON_IsNull(s_ezmaxpartner_name1))
    {
    goto end; //String
    }
    }

    // documentation_subscribe_v1_request->s_ezmaxpartner_name2
    cJSON *s_ezmaxpartner_name2 = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "sEzmaxpartnerName2");
    if (cJSON_IsNull(s_ezmaxpartner_name2)) {
        s_ezmaxpartner_name2 = NULL;
    }
    if (s_ezmaxpartner_name2) { 
    if(!cJSON_IsString(s_ezmaxpartner_name2) && !cJSON_IsNull(s_ezmaxpartner_name2))
    {
    goto end; //String
    }
    }

    // documentation_subscribe_v1_request->fki_ezmaxpartnerproduct_id
    cJSON *fki_ezmaxpartnerproduct_id = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "fkiEzmaxpartnerproductID");
    if (cJSON_IsNull(fki_ezmaxpartnerproduct_id)) {
        fki_ezmaxpartnerproduct_id = NULL;
    }
    if (fki_ezmaxpartnerproduct_id) { 
    if(!cJSON_IsNumber(fki_ezmaxpartnerproduct_id))
    {
    goto end; //Numeric
    }
    fki_ezmaxpartnerproduct_id_local_var = malloc(sizeof(int));
    if(!fki_ezmaxpartnerproduct_id_local_var)
    {
        goto end;
    }
    *fki_ezmaxpartnerproduct_id_local_var = fki_ezmaxpartnerproduct_id->valuedouble;
    }

    // documentation_subscribe_v1_request->s_ezmaxpartnerproduct_name1
    cJSON *s_ezmaxpartnerproduct_name1 = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "sEzmaxpartnerproductName1");
    if (cJSON_IsNull(s_ezmaxpartnerproduct_name1)) {
        s_ezmaxpartnerproduct_name1 = NULL;
    }
    if (s_ezmaxpartnerproduct_name1) { 
    if(!cJSON_IsString(s_ezmaxpartnerproduct_name1) && !cJSON_IsNull(s_ezmaxpartnerproduct_name1))
    {
    goto end; //String
    }
    }

    // documentation_subscribe_v1_request->s_ezmaxpartnerproduct_name2
    cJSON *s_ezmaxpartnerproduct_name2 = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "sEzmaxpartnerproductName2");
    if (cJSON_IsNull(s_ezmaxpartnerproduct_name2)) {
        s_ezmaxpartnerproduct_name2 = NULL;
    }
    if (s_ezmaxpartnerproduct_name2) { 
    if(!cJSON_IsString(s_ezmaxpartnerproduct_name2) && !cJSON_IsNull(s_ezmaxpartnerproduct_name2))
    {
    goto end; //String
    }
    }

    // documentation_subscribe_v1_request->fki_ezmaxpartnerproductstage_id
    cJSON *fki_ezmaxpartnerproductstage_id = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "fkiEzmaxpartnerproductstageID");
    if (cJSON_IsNull(fki_ezmaxpartnerproductstage_id)) {
        fki_ezmaxpartnerproductstage_id = NULL;
    }
    if (fki_ezmaxpartnerproductstage_id) { 
    if(!cJSON_IsNumber(fki_ezmaxpartnerproductstage_id))
    {
    goto end; //Numeric
    }
    fki_ezmaxpartnerproductstage_id_local_var = malloc(sizeof(int));
    if(!fki_ezmaxpartnerproductstage_id_local_var)
    {
        goto end;
    }
    *fki_ezmaxpartnerproductstage_id_local_var = fki_ezmaxpartnerproductstage_id->valuedouble;
    }

    // documentation_subscribe_v1_request->s_ezmaxpartnerproductstage_code
    cJSON *s_ezmaxpartnerproductstage_code = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "sEzmaxpartnerproductstageCode");
    if (cJSON_IsNull(s_ezmaxpartnerproductstage_code)) {
        s_ezmaxpartnerproductstage_code = NULL;
    }
    if (s_ezmaxpartnerproductstage_code) { 
    if(!cJSON_IsString(s_ezmaxpartnerproductstage_code) && !cJSON_IsNull(s_ezmaxpartnerproductstage_code))
    {
    goto end; //String
    }
    }

    // documentation_subscribe_v1_request->s_user_login_name
    cJSON *s_user_login_name = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "sUserLoginName");
    if (cJSON_IsNull(s_user_login_name)) {
        s_user_login_name = NULL;
    }
    if (s_user_login_name) { 
    if(!cJSON_IsString(s_user_login_name) && !cJSON_IsNull(s_user_login_name))
    {
    goto end; //String
    }
    }

    // documentation_subscribe_v1_request->s_user_first_name
    cJSON *s_user_first_name = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "sUserFirstName");
    if (cJSON_IsNull(s_user_first_name)) {
        s_user_first_name = NULL;
    }
    if (s_user_first_name) { 
    if(!cJSON_IsString(s_user_first_name) && !cJSON_IsNull(s_user_first_name))
    {
    goto end; //String
    }
    }

    // documentation_subscribe_v1_request->s_user_last_name
    cJSON *s_user_last_name = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "sUserLastName");
    if (cJSON_IsNull(s_user_last_name)) {
        s_user_last_name = NULL;
    }
    if (s_user_last_name) { 
    if(!cJSON_IsString(s_user_last_name) && !cJSON_IsNull(s_user_last_name))
    {
    goto end; //String
    }
    }

    // documentation_subscribe_v1_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    fki_user_id_local_var = malloc(sizeof(int));
    if(!fki_user_id_local_var)
    {
        goto end;
    }
    *fki_user_id_local_var = fki_user_id->valuedouble;
    }

    // documentation_subscribe_v1_request->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "fkiLanguageID");
    if (cJSON_IsNull(fki_language_id)) {
        fki_language_id = NULL;
    }
    if (fki_language_id) { 
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }
    fki_language_id_local_var = malloc(sizeof(int));
    if(!fki_language_id_local_var)
    {
        goto end;
    }
    *fki_language_id_local_var = fki_language_id->valuedouble;
    }

    // documentation_subscribe_v1_request->obj_address
    cJSON *obj_address = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "objAddress");
    if (cJSON_IsNull(obj_address)) {
        obj_address = NULL;
    }
    if (obj_address) { 
    obj_address_local_nonprim = address_request_compound_parseFromJSON(obj_address); //nonprimitive
    }

    // documentation_subscribe_v1_request->objphone
    cJSON *objphone = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "objphone");
    if (cJSON_IsNull(objphone)) {
        objphone = NULL;
    }
    if (objphone) { 
    objphone_local_nonprim = phone_request_compound_v2_parseFromJSON(objphone); //nonprimitive
    }

    // documentation_subscribe_v1_request->obj_email
    cJSON *obj_email = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_requestJSON, "objEmail");
    if (cJSON_IsNull(obj_email)) {
        obj_email = NULL;
    }
    if (obj_email) { 
    obj_email_local_nonprim = email_request_compound_parseFromJSON(obj_email); //nonprimitive
    }


    if (pks_ezmaxcustomer_code && !cJSON_IsNull(pks_ezmaxcustomer_code)) pks_ezmaxcustomer_code_local_str = strdup(pks_ezmaxcustomer_code->valuestring);
    if (s_infrastructureenvironmenttype_description && !cJSON_IsNull(s_infrastructureenvironmenttype_description)) s_infrastructureenvironmenttype_description_local_str = strdup(s_infrastructureenvironmenttype_description->valuestring);
    if (s_company_name1 && !cJSON_IsNull(s_company_name1)) s_company_name1_local_str = strdup(s_company_name1->valuestring);
    if (s_company_name2 && !cJSON_IsNull(s_company_name2)) s_company_name2_local_str = strdup(s_company_name2->valuestring);
    if (s_systemconfigurationtype_description1 && !cJSON_IsNull(s_systemconfigurationtype_description1)) s_systemconfigurationtype_description1_local_str = strdup(s_systemconfigurationtype_description1->valuestring);
    if (s_systemconfigurationtype_description2 && !cJSON_IsNull(s_systemconfigurationtype_description2)) s_systemconfigurationtype_description2_local_str = strdup(s_systemconfigurationtype_description2->valuestring);
    if (s_ezmaxpartner_name1 && !cJSON_IsNull(s_ezmaxpartner_name1)) s_ezmaxpartner_name1_local_str = strdup(s_ezmaxpartner_name1->valuestring);
    if (s_ezmaxpartner_name2 && !cJSON_IsNull(s_ezmaxpartner_name2)) s_ezmaxpartner_name2_local_str = strdup(s_ezmaxpartner_name2->valuestring);
    if (s_ezmaxpartnerproduct_name1 && !cJSON_IsNull(s_ezmaxpartnerproduct_name1)) s_ezmaxpartnerproduct_name1_local_str = strdup(s_ezmaxpartnerproduct_name1->valuestring);
    if (s_ezmaxpartnerproduct_name2 && !cJSON_IsNull(s_ezmaxpartnerproduct_name2)) s_ezmaxpartnerproduct_name2_local_str = strdup(s_ezmaxpartnerproduct_name2->valuestring);
    if (s_ezmaxpartnerproductstage_code && !cJSON_IsNull(s_ezmaxpartnerproductstage_code)) s_ezmaxpartnerproductstage_code_local_str = strdup(s_ezmaxpartnerproductstage_code->valuestring);
    if (s_user_login_name && !cJSON_IsNull(s_user_login_name)) s_user_login_name_local_str = strdup(s_user_login_name->valuestring);
    if (s_user_first_name && !cJSON_IsNull(s_user_first_name)) s_user_first_name_local_str = strdup(s_user_first_name->valuestring);
    if (s_user_last_name && !cJSON_IsNull(s_user_last_name)) s_user_last_name_local_str = strdup(s_user_last_name->valuestring);

    documentation_subscribe_v1_request_local_var = documentation_subscribe_v1_request_create_internal (
        pks_ezmaxcustomer_code_local_str,
        s_infrastructureenvironmenttype_description_local_str,
        s_company_name1_local_str,
        s_company_name2_local_str,
        fki_systemconfigurationtype_id_local_var,
        s_systemconfigurationtype_description1_local_str,
        s_systemconfigurationtype_description2_local_str,
        fki_ezmaxpartner_id_local_var,
        s_ezmaxpartner_name1_local_str,
        s_ezmaxpartner_name2_local_str,
        fki_ezmaxpartnerproduct_id_local_var,
        s_ezmaxpartnerproduct_name1_local_str,
        s_ezmaxpartnerproduct_name2_local_str,
        fki_ezmaxpartnerproductstage_id_local_var,
        s_ezmaxpartnerproductstage_code_local_str,
        s_user_login_name_local_str,
        s_user_first_name_local_str,
        s_user_last_name_local_str,
        fki_user_id_local_var,
        fki_language_id_local_var,
        obj_address ? obj_address_local_nonprim : NULL,
        objphone ? objphone_local_nonprim : NULL,
        obj_email ? obj_email_local_nonprim : NULL
        );

    if (!documentation_subscribe_v1_request_local_var) {
        goto end;
    }

    return documentation_subscribe_v1_request_local_var;
end:
    if (pks_ezmaxcustomer_code_local_str) {
        free(pks_ezmaxcustomer_code_local_str);
        pks_ezmaxcustomer_code_local_str = NULL;
    }
    if (s_infrastructureenvironmenttype_description_local_str) {
        free(s_infrastructureenvironmenttype_description_local_str);
        s_infrastructureenvironmenttype_description_local_str = NULL;
    }
    if (s_company_name1_local_str) {
        free(s_company_name1_local_str);
        s_company_name1_local_str = NULL;
    }
    if (s_company_name2_local_str) {
        free(s_company_name2_local_str);
        s_company_name2_local_str = NULL;
    }
    if (fki_systemconfigurationtype_id_local_var) {
        free(fki_systemconfigurationtype_id_local_var);
        fki_systemconfigurationtype_id_local_var = NULL;
    }
    if (s_systemconfigurationtype_description1_local_str) {
        free(s_systemconfigurationtype_description1_local_str);
        s_systemconfigurationtype_description1_local_str = NULL;
    }
    if (s_systemconfigurationtype_description2_local_str) {
        free(s_systemconfigurationtype_description2_local_str);
        s_systemconfigurationtype_description2_local_str = NULL;
    }
    if (fki_ezmaxpartner_id_local_var) {
        free(fki_ezmaxpartner_id_local_var);
        fki_ezmaxpartner_id_local_var = NULL;
    }
    if (s_ezmaxpartner_name1_local_str) {
        free(s_ezmaxpartner_name1_local_str);
        s_ezmaxpartner_name1_local_str = NULL;
    }
    if (s_ezmaxpartner_name2_local_str) {
        free(s_ezmaxpartner_name2_local_str);
        s_ezmaxpartner_name2_local_str = NULL;
    }
    if (fki_ezmaxpartnerproduct_id_local_var) {
        free(fki_ezmaxpartnerproduct_id_local_var);
        fki_ezmaxpartnerproduct_id_local_var = NULL;
    }
    if (s_ezmaxpartnerproduct_name1_local_str) {
        free(s_ezmaxpartnerproduct_name1_local_str);
        s_ezmaxpartnerproduct_name1_local_str = NULL;
    }
    if (s_ezmaxpartnerproduct_name2_local_str) {
        free(s_ezmaxpartnerproduct_name2_local_str);
        s_ezmaxpartnerproduct_name2_local_str = NULL;
    }
    if (fki_ezmaxpartnerproductstage_id_local_var) {
        free(fki_ezmaxpartnerproductstage_id_local_var);
        fki_ezmaxpartnerproductstage_id_local_var = NULL;
    }
    if (s_ezmaxpartnerproductstage_code_local_str) {
        free(s_ezmaxpartnerproductstage_code_local_str);
        s_ezmaxpartnerproductstage_code_local_str = NULL;
    }
    if (s_user_login_name_local_str) {
        free(s_user_login_name_local_str);
        s_user_login_name_local_str = NULL;
    }
    if (s_user_first_name_local_str) {
        free(s_user_first_name_local_str);
        s_user_first_name_local_str = NULL;
    }
    if (s_user_last_name_local_str) {
        free(s_user_last_name_local_str);
        s_user_last_name_local_str = NULL;
    }
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    if (fki_language_id_local_var) {
        free(fki_language_id_local_var);
        fki_language_id_local_var = NULL;
    }
    if (obj_address_local_nonprim) {
        address_request_compound_free(obj_address_local_nonprim);
        obj_address_local_nonprim = NULL;
    }
    if (objphone_local_nonprim) {
        phone_request_compound_v2_free(objphone_local_nonprim);
        objphone_local_nonprim = NULL;
    }
    if (obj_email_local_nonprim) {
        email_request_compound_free(obj_email_local_nonprim);
        obj_email_local_nonprim = NULL;
    }
    return NULL;

}
