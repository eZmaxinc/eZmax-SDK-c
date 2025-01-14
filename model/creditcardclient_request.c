#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardclient_request.h"



creditcardclient_request_t *creditcardclient_request_create(
    int pki_creditcardclient_id,
    char *fks_creditcardtoken_id,
    int b_creditcardclientrelation_isdefault,
    char *s_creditcardclient_description,
    int b_creditcardclient_allowedcompanypayment,
    int b_creditcardclient_allowedezsign,
    int b_creditcardclient_allowedtranquillit,
    creditcarddetail_request_t *obj_creditcarddetail,
    char *s_creditcardclient_cvv
    ) {
    creditcardclient_request_t *creditcardclient_request_local_var = malloc(sizeof(creditcardclient_request_t));
    if (!creditcardclient_request_local_var) {
        return NULL;
    }
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


void creditcardclient_request_free(creditcardclient_request_t *creditcardclient_request) {
    if(NULL == creditcardclient_request){
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardclient_request->fks_creditcardtoken_id) {
        free(creditcardclient_request->fks_creditcardtoken_id);
        creditcardclient_request->fks_creditcardtoken_id = NULL;
    }
    if (creditcardclient_request->s_creditcardclient_description) {
        free(creditcardclient_request->s_creditcardclient_description);
        creditcardclient_request->s_creditcardclient_description = NULL;
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
    if(cJSON_AddNumberToObject(item, "pkiCreditcardclientID", creditcardclient_request->pki_creditcardclient_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bCreditcardclientrelationIsdefault", creditcardclient_request->b_creditcardclientrelation_isdefault) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bCreditcardclientAllowedcompanypayment", creditcardclient_request->b_creditcardclient_allowedcompanypayment) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_request->b_creditcardclient_allowedezsign
    if (!creditcardclient_request->b_creditcardclient_allowedezsign) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientAllowedezsign", creditcardclient_request->b_creditcardclient_allowedezsign) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_request->b_creditcardclient_allowedtranquillit
    if (!creditcardclient_request->b_creditcardclient_allowedtranquillit) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientAllowedtranquillit", creditcardclient_request->b_creditcardclient_allowedtranquillit) == NULL) {
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

    // define the local variable for creditcardclient_request->obj_creditcarddetail
    creditcarddetail_request_t *obj_creditcarddetail_local_nonprim = NULL;

    // creditcardclient_request->pki_creditcardclient_id
    cJSON *pki_creditcardclient_id = cJSON_GetObjectItemCaseSensitive(creditcardclient_requestJSON, "pkiCreditcardclientID");
    if (pki_creditcardclient_id) { 
    if(!cJSON_IsNumber(pki_creditcardclient_id))
    {
    goto end; //Numeric
    }
    }

    // creditcardclient_request->fks_creditcardtoken_id
    cJSON *fks_creditcardtoken_id = cJSON_GetObjectItemCaseSensitive(creditcardclient_requestJSON, "fksCreditcardtokenID");
    if (fks_creditcardtoken_id) { 
    if(!cJSON_IsString(fks_creditcardtoken_id) && !cJSON_IsNull(fks_creditcardtoken_id))
    {
    goto end; //String
    }
    }

    // creditcardclient_request->b_creditcardclientrelation_isdefault
    cJSON *b_creditcardclientrelation_isdefault = cJSON_GetObjectItemCaseSensitive(creditcardclient_requestJSON, "bCreditcardclientrelationIsdefault");
    if (!b_creditcardclientrelation_isdefault) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclientrelation_isdefault))
    {
    goto end; //Bool
    }

    // creditcardclient_request->s_creditcardclient_description
    cJSON *s_creditcardclient_description = cJSON_GetObjectItemCaseSensitive(creditcardclient_requestJSON, "sCreditcardclientDescription");
    if (!s_creditcardclient_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardclient_description))
    {
    goto end; //String
    }

    // creditcardclient_request->b_creditcardclient_allowedcompanypayment
    cJSON *b_creditcardclient_allowedcompanypayment = cJSON_GetObjectItemCaseSensitive(creditcardclient_requestJSON, "bCreditcardclientAllowedcompanypayment");
    if (!b_creditcardclient_allowedcompanypayment) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_allowedcompanypayment))
    {
    goto end; //Bool
    }

    // creditcardclient_request->b_creditcardclient_allowedezsign
    cJSON *b_creditcardclient_allowedezsign = cJSON_GetObjectItemCaseSensitive(creditcardclient_requestJSON, "bCreditcardclientAllowedezsign");
    if (!b_creditcardclient_allowedezsign) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_allowedezsign))
    {
    goto end; //Bool
    }

    // creditcardclient_request->b_creditcardclient_allowedtranquillit
    cJSON *b_creditcardclient_allowedtranquillit = cJSON_GetObjectItemCaseSensitive(creditcardclient_requestJSON, "bCreditcardclientAllowedtranquillit");
    if (!b_creditcardclient_allowedtranquillit) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_allowedtranquillit))
    {
    goto end; //Bool
    }

    // creditcardclient_request->obj_creditcarddetail
    cJSON *obj_creditcarddetail = cJSON_GetObjectItemCaseSensitive(creditcardclient_requestJSON, "objCreditcarddetail");
    if (!obj_creditcarddetail) {
        goto end;
    }

    
    obj_creditcarddetail_local_nonprim = creditcarddetail_request_parseFromJSON(obj_creditcarddetail); //nonprimitive

    // creditcardclient_request->s_creditcardclient_cvv
    cJSON *s_creditcardclient_cvv = cJSON_GetObjectItemCaseSensitive(creditcardclient_requestJSON, "sCreditcardclientCVV");
    if (!s_creditcardclient_cvv) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardclient_cvv))
    {
    goto end; //String
    }


    creditcardclient_request_local_var = creditcardclient_request_create (
        pki_creditcardclient_id ? pki_creditcardclient_id->valuedouble : 0,
        fks_creditcardtoken_id && !cJSON_IsNull(fks_creditcardtoken_id) ? strdup(fks_creditcardtoken_id->valuestring) : NULL,
        b_creditcardclientrelation_isdefault->valueint,
        strdup(s_creditcardclient_description->valuestring),
        b_creditcardclient_allowedcompanypayment->valueint,
        b_creditcardclient_allowedezsign->valueint,
        b_creditcardclient_allowedtranquillit->valueint,
        obj_creditcarddetail_local_nonprim,
        strdup(s_creditcardclient_cvv->valuestring)
        );

    return creditcardclient_request_local_var;
end:
    if (obj_creditcarddetail_local_nonprim) {
        creditcarddetail_request_free(obj_creditcarddetail_local_nonprim);
        obj_creditcarddetail_local_nonprim = NULL;
    }
    return NULL;

}
