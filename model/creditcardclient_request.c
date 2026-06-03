#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardclient_request.h"



static creditcardclient_request_t *creditcardclient_request_create_internal(
    int *pki_creditcardclient_id,
    char *fks_creditcardtoken_id,
    int *b_creditcardclientrelation_isdefault,
    char *s_creditcardclient_description,
    int *b_creditcardclient_allowedcompanypayment,
    int *b_creditcardclient_allowedezsign,
    int *b_creditcardclient_allowedtranquillit,
    creditcarddetail_request_t *obj_creditcarddetail,
    char *s_creditcardclient_cvv
    ) {
    creditcardclient_request_t *creditcardclient_request_local_var = malloc(sizeof(creditcardclient_request_t));
    if (!creditcardclient_request_local_var) {
        return NULL;
    }
    memset(creditcardclient_request_local_var, 0, sizeof(creditcardclient_request_t));
    creditcardclient_request_local_var->_library_owned = 1;
    creditcardclient_request_local_var->pki_creditcardclient_id = pki_creditcardclient_id;
    creditcardclient_request_local_var->fks_creditcardtoken_id = fks_creditcardtoken_id;
    creditcardclient_request_local_var->b_creditcardclientrelation_isdefault = b_creditcardclientrelation_isdefault;
    creditcardclient_request_local_var->s_creditcardclient_description = s_creditcardclient_description;
    creditcardclient_request_local_var->b_creditcardclient_allowedcompanypayment = b_creditcardclient_allowedcompanypayment;
    creditcardclient_request_local_var->b_creditcardclient_allowedezsign = b_creditcardclient_allowedezsign;
    creditcardclient_request_local_var->b_creditcardclient_allowedtranquillit = b_creditcardclient_allowedtranquillit;
    creditcardclient_request_local_var->obj_creditcarddetail = obj_creditcarddetail;
    creditcardclient_request_local_var->s_creditcardclient_cvv = s_creditcardclient_cvv;
    return creditcardclient_request_local_var;
}

__attribute__((deprecated)) creditcardclient_request_t *creditcardclient_request_create(
    int *pki_creditcardclient_id,
    char *fks_creditcardtoken_id,
    int *b_creditcardclientrelation_isdefault,
    char *s_creditcardclient_description,
    int *b_creditcardclient_allowedcompanypayment,
    int *b_creditcardclient_allowedezsign,
    int *b_creditcardclient_allowedtranquillit,
    creditcarddetail_request_t *obj_creditcarddetail,
    char *s_creditcardclient_cvv
    ) {
    int *pki_creditcardclient_id_copy = NULL;
    if (pki_creditcardclient_id) {
        pki_creditcardclient_id_copy = malloc(sizeof(int));
        if (pki_creditcardclient_id_copy) *pki_creditcardclient_id_copy = *pki_creditcardclient_id;
    }
    int *b_creditcardclientrelation_isdefault_copy = NULL;
    if (b_creditcardclientrelation_isdefault) {
        b_creditcardclientrelation_isdefault_copy = malloc(sizeof(int));
        if (b_creditcardclientrelation_isdefault_copy) *b_creditcardclientrelation_isdefault_copy = *b_creditcardclientrelation_isdefault;
    }
    int *b_creditcardclient_allowedcompanypayment_copy = NULL;
    if (b_creditcardclient_allowedcompanypayment) {
        b_creditcardclient_allowedcompanypayment_copy = malloc(sizeof(int));
        if (b_creditcardclient_allowedcompanypayment_copy) *b_creditcardclient_allowedcompanypayment_copy = *b_creditcardclient_allowedcompanypayment;
    }
    int *b_creditcardclient_allowedezsign_copy = NULL;
    if (b_creditcardclient_allowedezsign) {
        b_creditcardclient_allowedezsign_copy = malloc(sizeof(int));
        if (b_creditcardclient_allowedezsign_copy) *b_creditcardclient_allowedezsign_copy = *b_creditcardclient_allowedezsign;
    }
    int *b_creditcardclient_allowedtranquillit_copy = NULL;
    if (b_creditcardclient_allowedtranquillit) {
        b_creditcardclient_allowedtranquillit_copy = malloc(sizeof(int));
        if (b_creditcardclient_allowedtranquillit_copy) *b_creditcardclient_allowedtranquillit_copy = *b_creditcardclient_allowedtranquillit;
    }
    creditcardclient_request_t *result = creditcardclient_request_create_internal (
        pki_creditcardclient_id_copy,
        fks_creditcardtoken_id,
        b_creditcardclientrelation_isdefault_copy,
        s_creditcardclient_description,
        b_creditcardclient_allowedcompanypayment_copy,
        b_creditcardclient_allowedezsign_copy,
        b_creditcardclient_allowedtranquillit_copy,
        obj_creditcarddetail,
        s_creditcardclient_cvv
        );
    if (!result) {
        free(pki_creditcardclient_id_copy);
        free(b_creditcardclientrelation_isdefault_copy);
        free(b_creditcardclient_allowedcompanypayment_copy);
        free(b_creditcardclient_allowedezsign_copy);
        free(b_creditcardclient_allowedtranquillit_copy);
    }
    return result;
}

void creditcardclient_request_free(creditcardclient_request_t *creditcardclient_request) {
    if(NULL == creditcardclient_request){
        return ;
    }
    if(creditcardclient_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcardclient_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardclient_request->pki_creditcardclient_id) {
        free(creditcardclient_request->pki_creditcardclient_id);
        creditcardclient_request->pki_creditcardclient_id = NULL;
    }
    if (creditcardclient_request->fks_creditcardtoken_id) {
        free(creditcardclient_request->fks_creditcardtoken_id);
        creditcardclient_request->fks_creditcardtoken_id = NULL;
    }
    if (creditcardclient_request->b_creditcardclientrelation_isdefault) {
        free(creditcardclient_request->b_creditcardclientrelation_isdefault);
        creditcardclient_request->b_creditcardclientrelation_isdefault = NULL;
    }
    if (creditcardclient_request->s_creditcardclient_description) {
        free(creditcardclient_request->s_creditcardclient_description);
        creditcardclient_request->s_creditcardclient_description = NULL;
    }
    if (creditcardclient_request->b_creditcardclient_allowedcompanypayment) {
        free(creditcardclient_request->b_creditcardclient_allowedcompanypayment);
        creditcardclient_request->b_creditcardclient_allowedcompanypayment = NULL;
    }
    if (creditcardclient_request->b_creditcardclient_allowedezsign) {
        free(creditcardclient_request->b_creditcardclient_allowedezsign);
        creditcardclient_request->b_creditcardclient_allowedezsign = NULL;
    }
    if (creditcardclient_request->b_creditcardclient_allowedtranquillit) {
        free(creditcardclient_request->b_creditcardclient_allowedtranquillit);
        creditcardclient_request->b_creditcardclient_allowedtranquillit = NULL;
    }
    if (creditcardclient_request->obj_creditcarddetail) {
        creditcarddetail_request_free(creditcardclient_request->obj_creditcarddetail);
        creditcardclient_request->obj_creditcarddetail = NULL;
    }
    if (creditcardclient_request->s_creditcardclient_cvv) {
        free(creditcardclient_request->s_creditcardclient_cvv);
        creditcardclient_request->s_creditcardclient_cvv = NULL;
    }
    free(creditcardclient_request);
}

cJSON *creditcardclient_request_convertToJSON(creditcardclient_request_t *creditcardclient_request) {
    cJSON *item = cJSON_CreateObject();

    // creditcardclient_request->pki_creditcardclient_id
    if(creditcardclient_request->pki_creditcardclient_id) {
    if(cJSON_AddNumberToObject(item, "pkiCreditcardclientID", *creditcardclient_request->pki_creditcardclient_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // creditcardclient_request->fks_creditcardtoken_id
    if(creditcardclient_request->fks_creditcardtoken_id) {
    if(cJSON_AddStringToObject(item, "fksCreditcardtokenID", creditcardclient_request->fks_creditcardtoken_id) == NULL) {
    goto fail; //String
    }
    }


    // creditcardclient_request->b_creditcardclientrelation_isdefault
    if (!creditcardclient_request->b_creditcardclientrelation_isdefault) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientrelationIsdefault", *creditcardclient_request->b_creditcardclientrelation_isdefault) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_request->s_creditcardclient_description
    if (!creditcardclient_request->s_creditcardclient_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardclientDescription", creditcardclient_request->s_creditcardclient_description) == NULL) {
    goto fail; //String
    }


    // creditcardclient_request->b_creditcardclient_allowedcompanypayment
    if (!creditcardclient_request->b_creditcardclient_allowedcompanypayment) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientAllowedcompanypayment", *creditcardclient_request->b_creditcardclient_allowedcompanypayment) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_request->b_creditcardclient_allowedezsign
    if (!creditcardclient_request->b_creditcardclient_allowedezsign) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientAllowedezsign", *creditcardclient_request->b_creditcardclient_allowedezsign) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_request->b_creditcardclient_allowedtranquillit
    if (!creditcardclient_request->b_creditcardclient_allowedtranquillit) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientAllowedtranquillit", *creditcardclient_request->b_creditcardclient_allowedtranquillit) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_request->obj_creditcarddetail
    if (!creditcardclient_request->obj_creditcarddetail) {
        goto fail;
    }
    cJSON *obj_creditcarddetail_local_JSON = creditcarddetail_request_convertToJSON(creditcardclient_request->obj_creditcarddetail);
    if(obj_creditcarddetail_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCreditcarddetail", obj_creditcarddetail_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // creditcardclient_request->s_creditcardclient_cvv
    if (!creditcardclient_request->s_creditcardclient_cvv) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardclientCVV", creditcardclient_request->s_creditcardclient_cvv) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

creditcardclient_request_t *creditcardclient_request_parseFromJSON(cJSON *creditcardclient_requestJSON){

    creditcardclient_request_t *creditcardclient_request_local_var = NULL;

    // define the local variable for creditcardclient_request->pki_creditcardclient_id
    int *pki_creditcardclient_id_local_var = NULL;

    char *fks_creditcardtoken_id_local_str = NULL;

    // define the local variable for creditcardclient_request->b_creditcardclientrelation_isdefault
    int *b_creditcardclientrelation_isdefault_local_var = NULL;

    char *s_creditcardclient_description_local_str = NULL;

    // define the local variable for creditcardclient_request->b_creditcardclient_allowedcompanypayment
    int *b_creditcardclient_allowedcompanypayment_local_var = NULL;

    // define the local variable for creditcardclient_request->b_creditcardclient_allowedezsign
    int *b_creditcardclient_allowedezsign_local_var = NULL;

    // define the local variable for creditcardclient_request->b_creditcardclient_allowedtranquillit
    int *b_creditcardclient_allowedtranquillit_local_var = NULL;

    // define the local variable for creditcardclient_request->obj_creditcarddetail
    creditcarddetail_request_t *obj_creditcarddetail_local_nonprim = NULL;

    char *s_creditcardclient_cvv_local_str = NULL;

    // creditcardclient_request->pki_creditcardclient_id
    cJSON *pki_creditcardclient_id = cJSON_GetObjectItemCaseSensitive(creditcardclient_requestJSON, "pkiCreditcardclientID");
    if (cJSON_IsNull(pki_creditcardclient_id)) {
        pki_creditcardclient_id = NULL;
    }
    if (pki_creditcardclient_id) { 
    if(!cJSON_IsNumber(pki_creditcardclient_id))
    {
    goto end; //Numeric
    }
    pki_creditcardclient_id_local_var = malloc(sizeof(int));
    if(!pki_creditcardclient_id_local_var)
    {
        goto end;
    }
    *pki_creditcardclient_id_local_var = pki_creditcardclient_id->valuedouble;
    }

    // creditcardclient_request->fks_creditcardtoken_id
    cJSON *fks_creditcardtoken_id = cJSON_GetObjectItemCaseSensitive(creditcardclient_requestJSON, "fksCreditcardtokenID");
    if (cJSON_IsNull(fks_creditcardtoken_id)) {
        fks_creditcardtoken_id = NULL;
    }
    if (fks_creditcardtoken_id) { 
    if(!cJSON_IsString(fks_creditcardtoken_id) && !cJSON_IsNull(fks_creditcardtoken_id))
    {
    goto end; //String
    }
    }

    // creditcardclient_request->b_creditcardclientrelation_isdefault
    cJSON *b_creditcardclientrelation_isdefault = cJSON_GetObjectItemCaseSensitive(creditcardclient_requestJSON, "bCreditcardclientrelationIsdefault");
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
    b_creditcardclientrelation_isdefault_local_var = malloc(sizeof(int));
    if(!b_creditcardclientrelation_isdefault_local_var)
    {
        goto end;
    }
    *b_creditcardclientrelation_isdefault_local_var = b_creditcardclientrelation_isdefault->valueint;

    // creditcardclient_request->s_creditcardclient_description
    cJSON *s_creditcardclient_description = cJSON_GetObjectItemCaseSensitive(creditcardclient_requestJSON, "sCreditcardclientDescription");
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

    // creditcardclient_request->b_creditcardclient_allowedcompanypayment
    cJSON *b_creditcardclient_allowedcompanypayment = cJSON_GetObjectItemCaseSensitive(creditcardclient_requestJSON, "bCreditcardclientAllowedcompanypayment");
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
    b_creditcardclient_allowedcompanypayment_local_var = malloc(sizeof(int));
    if(!b_creditcardclient_allowedcompanypayment_local_var)
    {
        goto end;
    }
    *b_creditcardclient_allowedcompanypayment_local_var = b_creditcardclient_allowedcompanypayment->valueint;

    // creditcardclient_request->b_creditcardclient_allowedezsign
    cJSON *b_creditcardclient_allowedezsign = cJSON_GetObjectItemCaseSensitive(creditcardclient_requestJSON, "bCreditcardclientAllowedezsign");
    if (cJSON_IsNull(b_creditcardclient_allowedezsign)) {
        b_creditcardclient_allowedezsign = NULL;
    }
    if (!b_creditcardclient_allowedezsign) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_allowedezsign))
    {
    goto end; //Bool
    }
    b_creditcardclient_allowedezsign_local_var = malloc(sizeof(int));
    if(!b_creditcardclient_allowedezsign_local_var)
    {
        goto end;
    }
    *b_creditcardclient_allowedezsign_local_var = b_creditcardclient_allowedezsign->valueint;

    // creditcardclient_request->b_creditcardclient_allowedtranquillit
    cJSON *b_creditcardclient_allowedtranquillit = cJSON_GetObjectItemCaseSensitive(creditcardclient_requestJSON, "bCreditcardclientAllowedtranquillit");
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
    b_creditcardclient_allowedtranquillit_local_var = malloc(sizeof(int));
    if(!b_creditcardclient_allowedtranquillit_local_var)
    {
        goto end;
    }
    *b_creditcardclient_allowedtranquillit_local_var = b_creditcardclient_allowedtranquillit->valueint;

    // creditcardclient_request->obj_creditcarddetail
    cJSON *obj_creditcarddetail = cJSON_GetObjectItemCaseSensitive(creditcardclient_requestJSON, "objCreditcarddetail");
    if (cJSON_IsNull(obj_creditcarddetail)) {
        obj_creditcarddetail = NULL;
    }
    if (!obj_creditcarddetail) {
        goto end;
    }

    
    obj_creditcarddetail_local_nonprim = creditcarddetail_request_parseFromJSON(obj_creditcarddetail); //nonprimitive

    // creditcardclient_request->s_creditcardclient_cvv
    cJSON *s_creditcardclient_cvv = cJSON_GetObjectItemCaseSensitive(creditcardclient_requestJSON, "sCreditcardclientCVV");
    if (cJSON_IsNull(s_creditcardclient_cvv)) {
        s_creditcardclient_cvv = NULL;
    }
    if (!s_creditcardclient_cvv) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardclient_cvv))
    {
    goto end; //String
    }


    if (fks_creditcardtoken_id && !cJSON_IsNull(fks_creditcardtoken_id)) fks_creditcardtoken_id_local_str = strdup(fks_creditcardtoken_id->valuestring);
    if (s_creditcardclient_description && !cJSON_IsNull(s_creditcardclient_description)) s_creditcardclient_description_local_str = strdup(s_creditcardclient_description->valuestring);
    if (s_creditcardclient_cvv && !cJSON_IsNull(s_creditcardclient_cvv)) s_creditcardclient_cvv_local_str = strdup(s_creditcardclient_cvv->valuestring);

    creditcardclient_request_local_var = creditcardclient_request_create_internal (
        pki_creditcardclient_id_local_var,
        fks_creditcardtoken_id_local_str,
        b_creditcardclientrelation_isdefault_local_var,
        s_creditcardclient_description_local_str,
        b_creditcardclient_allowedcompanypayment_local_var,
        b_creditcardclient_allowedezsign_local_var,
        b_creditcardclient_allowedtranquillit_local_var,
        obj_creditcarddetail_local_nonprim,
        s_creditcardclient_cvv_local_str
        );

    if (!creditcardclient_request_local_var) {
        goto end;
    }

    return creditcardclient_request_local_var;
end:
    if (pki_creditcardclient_id_local_var) {
        free(pki_creditcardclient_id_local_var);
        pki_creditcardclient_id_local_var = NULL;
    }
    if (fks_creditcardtoken_id_local_str) {
        free(fks_creditcardtoken_id_local_str);
        fks_creditcardtoken_id_local_str = NULL;
    }
    if (b_creditcardclientrelation_isdefault_local_var) {
        free(b_creditcardclientrelation_isdefault_local_var);
        b_creditcardclientrelation_isdefault_local_var = NULL;
    }
    if (s_creditcardclient_description_local_str) {
        free(s_creditcardclient_description_local_str);
        s_creditcardclient_description_local_str = NULL;
    }
    if (b_creditcardclient_allowedcompanypayment_local_var) {
        free(b_creditcardclient_allowedcompanypayment_local_var);
        b_creditcardclient_allowedcompanypayment_local_var = NULL;
    }
    if (b_creditcardclient_allowedezsign_local_var) {
        free(b_creditcardclient_allowedezsign_local_var);
        b_creditcardclient_allowedezsign_local_var = NULL;
    }
    if (b_creditcardclient_allowedtranquillit_local_var) {
        free(b_creditcardclient_allowedtranquillit_local_var);
        b_creditcardclient_allowedtranquillit_local_var = NULL;
    }
    if (obj_creditcarddetail_local_nonprim) {
        creditcarddetail_request_free(obj_creditcarddetail_local_nonprim);
        obj_creditcarddetail_local_nonprim = NULL;
    }
    if (s_creditcardclient_cvv_local_str) {
        free(s_creditcardclient_cvv_local_str);
        s_creditcardclient_cvv_local_str = NULL;
    }
    return NULL;

}
