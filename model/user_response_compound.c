#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_response_compound.h"


char* e_user_typeuser_response_compound_ToString(ezmax_api_definition__full_user_response_compound__e e_user_type) {
    char* e_user_typeArray[] =  { "NULL", "AgentBroker", "Assistant", "Attendance", "Customer", "Employee", "Ezcom", "EzsignSigner", "EzsignUser", "FranchiseCustomerServer", "Normal", "RewardAdministration", "RewardMember", "RewardRepresentative", "RewardCustomer", "RewardDistributorServer", "Supplier", "VetrxCustomer", "Vetrxcustomergroup", "VetrxCustomerServer", "VetrxManufacturer", "VetrxVendor" };
	return e_user_typeArray[e_user_type];
}

ezmax_api_definition__full_user_response_compound__e e_user_typeuser_response_compound_FromString(char* e_user_type){
    int stringToReturn = 0;
    char *e_user_typeArray[] =  { "NULL", "AgentBroker", "Assistant", "Attendance", "Customer", "Employee", "Ezcom", "EzsignSigner", "EzsignUser", "FranchiseCustomerServer", "Normal", "RewardAdministration", "RewardMember", "RewardRepresentative", "RewardCustomer", "RewardDistributorServer", "Supplier", "VetrxCustomer", "Vetrxcustomergroup", "VetrxCustomerServer", "VetrxManufacturer", "VetrxVendor" };
    size_t sizeofArray = sizeof(e_user_typeArray) / sizeof(e_user_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_user_type, e_user_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

user_response_compound_t *user_response_compound_create(
    int pki_user_id,
    int fki_language_id,
    field_e_user_type_t *e_user_type,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    common_audit_t *obj_audit
    ) {
    user_response_compound_t *user_response_compound_local_var = malloc(sizeof(user_response_compound_t));
    if (!user_response_compound_local_var) {
        return NULL;
    }
    user_response_compound_local_var->pki_user_id = pki_user_id;
    user_response_compound_local_var->fki_language_id = fki_language_id;
    user_response_compound_local_var->e_user_type = e_user_type;
    user_response_compound_local_var->s_user_firstname = s_user_firstname;
    user_response_compound_local_var->s_user_lastname = s_user_lastname;
    user_response_compound_local_var->s_user_loginname = s_user_loginname;
    user_response_compound_local_var->obj_audit = obj_audit;

    return user_response_compound_local_var;
}


void user_response_compound_free(user_response_compound_t *user_response_compound) {
    if(NULL == user_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (user_response_compound->e_user_type) {
        field_e_user_type_free(user_response_compound->e_user_type);
        user_response_compound->e_user_type = NULL;
    }
    if (user_response_compound->s_user_firstname) {
        free(user_response_compound->s_user_firstname);
        user_response_compound->s_user_firstname = NULL;
    }
    if (user_response_compound->s_user_lastname) {
        free(user_response_compound->s_user_lastname);
        user_response_compound->s_user_lastname = NULL;
    }
    if (user_response_compound->s_user_loginname) {
        free(user_response_compound->s_user_loginname);
        user_response_compound->s_user_loginname = NULL;
    }
    if (user_response_compound->obj_audit) {
        common_audit_free(user_response_compound->obj_audit);
        user_response_compound->obj_audit = NULL;
    }
    free(user_response_compound);
}

cJSON *user_response_compound_convertToJSON(user_response_compound_t *user_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // user_response_compound->pki_user_id
    if (!user_response_compound->pki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUserID", user_response_compound->pki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // user_response_compound->fki_language_id
    if (!user_response_compound->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", user_response_compound->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // user_response_compound->e_user_type
    if (ezmax_api_definition__full_user_response_compound__NULL == user_response_compound->e_user_type) {
        goto fail;
    }
    cJSON *e_user_type_local_JSON = field_e_user_type_convertToJSON(user_response_compound->e_user_type);
    if(e_user_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eUserType", e_user_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // user_response_compound->s_user_firstname
    if (!user_response_compound->s_user_firstname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserFirstname", user_response_compound->s_user_firstname) == NULL) {
    goto fail; //String
    }


    // user_response_compound->s_user_lastname
    if (!user_response_compound->s_user_lastname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLastname", user_response_compound->s_user_lastname) == NULL) {
    goto fail; //String
    }


    // user_response_compound->s_user_loginname
    if (!user_response_compound->s_user_loginname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLoginname", user_response_compound->s_user_loginname) == NULL) {
    goto fail; //String
    }


    // user_response_compound->obj_audit
    if (!user_response_compound->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(user_response_compound->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_response_compound_t *user_response_compound_parseFromJSON(cJSON *user_response_compoundJSON){

    user_response_compound_t *user_response_compound_local_var = NULL;

    // define the local variable for user_response_compound->e_user_type
    field_e_user_type_t *e_user_type_local_nonprim = NULL;

    // define the local variable for user_response_compound->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // user_response_compound->pki_user_id
    cJSON *pki_user_id = cJSON_GetObjectItemCaseSensitive(user_response_compoundJSON, "pkiUserID");
    if (!pki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_user_id))
    {
    goto end; //Numeric
    }

    // user_response_compound->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(user_response_compoundJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // user_response_compound->e_user_type
    cJSON *e_user_type = cJSON_GetObjectItemCaseSensitive(user_response_compoundJSON, "eUserType");
    if (!e_user_type) {
        goto end;
    }

    
    e_user_type_local_nonprim = field_e_user_type_parseFromJSON(e_user_type); //custom

    // user_response_compound->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(user_response_compoundJSON, "sUserFirstname");
    if (!s_user_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname))
    {
    goto end; //String
    }

    // user_response_compound->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(user_response_compoundJSON, "sUserLastname");
    if (!s_user_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname))
    {
    goto end; //String
    }

    // user_response_compound->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(user_response_compoundJSON, "sUserLoginname");
    if (!s_user_loginname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_loginname))
    {
    goto end; //String
    }

    // user_response_compound->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(user_response_compoundJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    user_response_compound_local_var = user_response_compound_create (
        pki_user_id->valuedouble,
        fki_language_id->valuedouble,
        e_user_type_local_nonprim,
        strdup(s_user_firstname->valuestring),
        strdup(s_user_lastname->valuestring),
        strdup(s_user_loginname->valuestring),
        obj_audit_local_nonprim
        );

    return user_response_compound_local_var;
end:
    if (e_user_type_local_nonprim) {
        field_e_user_type_free(e_user_type_local_nonprim);
        e_user_type_local_nonprim = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
