#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardclient_response_compound.h"



static creditcardclient_response_compound_t *creditcardclient_response_compound_create_internal(
    int pki_creditcardclient_id,
    int fki_creditcarddetail_id,
    int b_creditcardclientrelation_isdefault,
    char *s_creditcardclient_description,
    int b_creditcardclient_allowedcompanypayment,
    int b_creditcardclient_allowedtranquillit,
    creditcarddetail_response_compound_t *obj_creditcarddetail
    ) {
    creditcardclient_response_compound_t *creditcardclient_response_compound_local_var = malloc(sizeof(creditcardclient_response_compound_t));
    if (!creditcardclient_response_compound_local_var) {
        return NULL;
    }
    creditcardclient_response_compound_local_var->pki_creditcardclient_id = pki_creditcardclient_id;
    creditcardclient_response_compound_local_var->fki_creditcarddetail_id = fki_creditcarddetail_id;
    creditcardclient_response_compound_local_var->b_creditcardclientrelation_isdefault = b_creditcardclientrelation_isdefault;
    creditcardclient_response_compound_local_var->s_creditcardclient_description = s_creditcardclient_description;
    creditcardclient_response_compound_local_var->b_creditcardclient_allowedcompanypayment = b_creditcardclient_allowedcompanypayment;
    creditcardclient_response_compound_local_var->b_creditcardclient_allowedtranquillit = b_creditcardclient_allowedtranquillit;
    creditcardclient_response_compound_local_var->obj_creditcarddetail = obj_creditcarddetail;

    creditcardclient_response_compound_local_var->_library_owned = 1;
    return creditcardclient_response_compound_local_var;
}

__attribute__((deprecated)) creditcardclient_response_compound_t *creditcardclient_response_compound_create(
    int pki_creditcardclient_id,
    int fki_creditcarddetail_id,
    int b_creditcardclientrelation_isdefault,
    char *s_creditcardclient_description,
    int b_creditcardclient_allowedcompanypayment,
    int b_creditcardclient_allowedtranquillit,
    creditcarddetail_response_compound_t *obj_creditcarddetail
    ) {
    return creditcardclient_response_compound_create_internal (
        pki_creditcardclient_id,
        fki_creditcarddetail_id,
        b_creditcardclientrelation_isdefault,
        s_creditcardclient_description,
        b_creditcardclient_allowedcompanypayment,
        b_creditcardclient_allowedtranquillit,
        obj_creditcarddetail
        );
}

void creditcardclient_response_compound_free(creditcardclient_response_compound_t *creditcardclient_response_compound) {
    if(NULL == creditcardclient_response_compound){
        return ;
    }
    if(creditcardclient_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcardclient_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardclient_response_compound->s_creditcardclient_description) {
        free(creditcardclient_response_compound->s_creditcardclient_description);
        creditcardclient_response_compound->s_creditcardclient_description = NULL;
    }
    if (creditcardclient_response_compound->obj_creditcarddetail) {
        creditcarddetail_response_compound_free(creditcardclient_response_compound->obj_creditcarddetail);
        creditcardclient_response_compound->obj_creditcarddetail = NULL;
    }
    free(creditcardclient_response_compound);
}

cJSON *creditcardclient_response_compound_convertToJSON(creditcardclient_response_compound_t *creditcardclient_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // creditcardclient_response_compound->pki_creditcardclient_id
    if (!creditcardclient_response_compound->pki_creditcardclient_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCreditcardclientID", creditcardclient_response_compound->pki_creditcardclient_id) == NULL) {
    goto fail; //Numeric
    }


    // creditcardclient_response_compound->fki_creditcarddetail_id
    if (!creditcardclient_response_compound->fki_creditcarddetail_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCreditcarddetailID", creditcardclient_response_compound->fki_creditcarddetail_id) == NULL) {
    goto fail; //Numeric
    }


    // creditcardclient_response_compound->b_creditcardclientrelation_isdefault
    if (!creditcardclient_response_compound->b_creditcardclientrelation_isdefault) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientrelationIsdefault", creditcardclient_response_compound->b_creditcardclientrelation_isdefault) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_response_compound->s_creditcardclient_description
    if (!creditcardclient_response_compound->s_creditcardclient_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardclientDescription", creditcardclient_response_compound->s_creditcardclient_description) == NULL) {
    goto fail; //String
    }


    // creditcardclient_response_compound->b_creditcardclient_allowedcompanypayment
    if (!creditcardclient_response_compound->b_creditcardclient_allowedcompanypayment) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientAllowedcompanypayment", creditcardclient_response_compound->b_creditcardclient_allowedcompanypayment) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_response_compound->b_creditcardclient_allowedtranquillit
    if (!creditcardclient_response_compound->b_creditcardclient_allowedtranquillit) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientAllowedtranquillit", creditcardclient_response_compound->b_creditcardclient_allowedtranquillit) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_response_compound->obj_creditcarddetail
    if (!creditcardclient_response_compound->obj_creditcarddetail) {
        goto fail;
    }
    cJSON *obj_creditcarddetail_local_JSON = creditcarddetail_response_compound_convertToJSON(creditcardclient_response_compound->obj_creditcarddetail);
    if(obj_creditcarddetail_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCreditcarddetail", obj_creditcarddetail_local_JSON);
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

creditcardclient_response_compound_t *creditcardclient_response_compound_parseFromJSON(cJSON *creditcardclient_response_compoundJSON){

    creditcardclient_response_compound_t *creditcardclient_response_compound_local_var = NULL;

    // define the local variable for creditcardclient_response_compound->obj_creditcarddetail
    creditcarddetail_response_compound_t *obj_creditcarddetail_local_nonprim = NULL;

    // creditcardclient_response_compound->pki_creditcardclient_id
    cJSON *pki_creditcardclient_id = cJSON_GetObjectItemCaseSensitive(creditcardclient_response_compoundJSON, "pkiCreditcardclientID");
    if (cJSON_IsNull(pki_creditcardclient_id)) {
        pki_creditcardclient_id = NULL;
    }
    if (!pki_creditcardclient_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_creditcardclient_id))
    {
    goto end; //Numeric
    }

    // creditcardclient_response_compound->fki_creditcarddetail_id
    cJSON *fki_creditcarddetail_id = cJSON_GetObjectItemCaseSensitive(creditcardclient_response_compoundJSON, "fkiCreditcarddetailID");
    if (cJSON_IsNull(fki_creditcarddetail_id)) {
        fki_creditcarddetail_id = NULL;
    }
    if (!fki_creditcarddetail_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_creditcarddetail_id))
    {
    goto end; //Numeric
    }

    // creditcardclient_response_compound->b_creditcardclientrelation_isdefault
    cJSON *b_creditcardclientrelation_isdefault = cJSON_GetObjectItemCaseSensitive(creditcardclient_response_compoundJSON, "bCreditcardclientrelationIsdefault");
    if (cJSON_IsNull(b_creditcardclientrelation_isdefault)) {
        b_creditcardclientrelation_isdefault = NULL;
    }
    if (!b_creditcardclientrelation_isdefault) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclientrelation_isdefault))
    {
    goto end; //Bool
    }

    // creditcardclient_response_compound->s_creditcardclient_description
    cJSON *s_creditcardclient_description = cJSON_GetObjectItemCaseSensitive(creditcardclient_response_compoundJSON, "sCreditcardclientDescription");
    if (cJSON_IsNull(s_creditcardclient_description)) {
        s_creditcardclient_description = NULL;
    }
    if (!s_creditcardclient_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardclient_description))
    {
    goto end; //String
    }

    // creditcardclient_response_compound->b_creditcardclient_allowedcompanypayment
    cJSON *b_creditcardclient_allowedcompanypayment = cJSON_GetObjectItemCaseSensitive(creditcardclient_response_compoundJSON, "bCreditcardclientAllowedcompanypayment");
    if (cJSON_IsNull(b_creditcardclient_allowedcompanypayment)) {
        b_creditcardclient_allowedcompanypayment = NULL;
    }
    if (!b_creditcardclient_allowedcompanypayment) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_allowedcompanypayment))
    {
    goto end; //Bool
    }

    // creditcardclient_response_compound->b_creditcardclient_allowedtranquillit
    cJSON *b_creditcardclient_allowedtranquillit = cJSON_GetObjectItemCaseSensitive(creditcardclient_response_compoundJSON, "bCreditcardclientAllowedtranquillit");
    if (cJSON_IsNull(b_creditcardclient_allowedtranquillit)) {
        b_creditcardclient_allowedtranquillit = NULL;
    }
    if (!b_creditcardclient_allowedtranquillit) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_allowedtranquillit))
    {
    goto end; //Bool
    }

    // creditcardclient_response_compound->obj_creditcarddetail
    cJSON *obj_creditcarddetail = cJSON_GetObjectItemCaseSensitive(creditcardclient_response_compoundJSON, "objCreditcarddetail");
    if (cJSON_IsNull(obj_creditcarddetail)) {
        obj_creditcarddetail = NULL;
    }
    if (!obj_creditcarddetail) {
        goto end;
    }

    
    obj_creditcarddetail_local_nonprim = creditcarddetail_response_compound_parseFromJSON(obj_creditcarddetail); //nonprimitive


    creditcardclient_response_compound_local_var = creditcardclient_response_compound_create_internal (
        pki_creditcardclient_id->valuedouble,
        fki_creditcarddetail_id->valuedouble,
        b_creditcardclientrelation_isdefault->valueint,
        strdup(s_creditcardclient_description->valuestring),
        b_creditcardclient_allowedcompanypayment->valueint,
        b_creditcardclient_allowedtranquillit->valueint,
        obj_creditcarddetail_local_nonprim
        );

    return creditcardclient_response_compound_local_var;
end:
    if (obj_creditcarddetail_local_nonprim) {
        creditcarddetail_response_compound_free(obj_creditcarddetail_local_nonprim);
        obj_creditcarddetail_local_nonprim = NULL;
    }
    return NULL;

}
