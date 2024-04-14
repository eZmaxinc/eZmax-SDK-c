#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardclient_request_compound.h"



creditcardclient_request_compound_t *creditcardclient_request_compound_create(
    int pki_creditcardclient_id,
    char *fks_creditcardtoken_id,
    int b_creditcardclientrelation_isdefault,
    char *s_creditcardclient_description,
    int b_creditcardclient_isactive,
    int b_creditcardclient_allowedagencypayment,
    int b_creditcardclient_allowedroyallepageprotection,
    int b_creditcardclient_allowedtranquillit,
    creditcarddetail_request_t *obj_creditcarddetail,
    char *s_creditcardclient_cvv
    ) {
    creditcardclient_request_compound_t *creditcardclient_request_compound_local_var = malloc(sizeof(creditcardclient_request_compound_t));
    if (!creditcardclient_request_compound_local_var) {
        return NULL;
    }
    creditcardclient_request_compound_local_var->pki_creditcardclient_id = pki_creditcardclient_id;
    creditcardclient_request_compound_local_var->fks_creditcardtoken_id = fks_creditcardtoken_id;
    creditcardclient_request_compound_local_var->b_creditcardclientrelation_isdefault = b_creditcardclientrelation_isdefault;
    creditcardclient_request_compound_local_var->s_creditcardclient_description = s_creditcardclient_description;
    creditcardclient_request_compound_local_var->b_creditcardclient_isactive = b_creditcardclient_isactive;
    creditcardclient_request_compound_local_var->b_creditcardclient_allowedagencypayment = b_creditcardclient_allowedagencypayment;
    creditcardclient_request_compound_local_var->b_creditcardclient_allowedroyallepageprotection = b_creditcardclient_allowedroyallepageprotection;
    creditcardclient_request_compound_local_var->b_creditcardclient_allowedtranquillit = b_creditcardclient_allowedtranquillit;
    creditcardclient_request_compound_local_var->obj_creditcarddetail = obj_creditcarddetail;
    creditcardclient_request_compound_local_var->s_creditcardclient_cvv = s_creditcardclient_cvv;

    return creditcardclient_request_compound_local_var;
}


void creditcardclient_request_compound_free(creditcardclient_request_compound_t *creditcardclient_request_compound) {
    if(NULL == creditcardclient_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardclient_request_compound->fks_creditcardtoken_id) {
        free(creditcardclient_request_compound->fks_creditcardtoken_id);
        creditcardclient_request_compound->fks_creditcardtoken_id = NULL;
    }
    if (creditcardclient_request_compound->s_creditcardclient_description) {
        free(creditcardclient_request_compound->s_creditcardclient_description);
        creditcardclient_request_compound->s_creditcardclient_description = NULL;
    }
    if (creditcardclient_request_compound->obj_creditcarddetail) {
        creditcarddetail_request_free(creditcardclient_request_compound->obj_creditcarddetail);
        creditcardclient_request_compound->obj_creditcarddetail = NULL;
    }
    if (creditcardclient_request_compound->s_creditcardclient_cvv) {
        free(creditcardclient_request_compound->s_creditcardclient_cvv);
        creditcardclient_request_compound->s_creditcardclient_cvv = NULL;
    }
    free(creditcardclient_request_compound);
}

cJSON *creditcardclient_request_compound_convertToJSON(creditcardclient_request_compound_t *creditcardclient_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // creditcardclient_request_compound->pki_creditcardclient_id
    if(creditcardclient_request_compound->pki_creditcardclient_id) {
    if(cJSON_AddNumberToObject(item, "pkiCreditcardclientID", creditcardclient_request_compound->pki_creditcardclient_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // creditcardclient_request_compound->fks_creditcardtoken_id
    if(creditcardclient_request_compound->fks_creditcardtoken_id) {
    if(cJSON_AddStringToObject(item, "fksCreditcardtokenID", creditcardclient_request_compound->fks_creditcardtoken_id) == NULL) {
    goto fail; //String
    }
    }


    // creditcardclient_request_compound->b_creditcardclientrelation_isdefault
    if (!creditcardclient_request_compound->b_creditcardclientrelation_isdefault) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientrelationIsdefault", creditcardclient_request_compound->b_creditcardclientrelation_isdefault) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_request_compound->s_creditcardclient_description
    if (!creditcardclient_request_compound->s_creditcardclient_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardclientDescription", creditcardclient_request_compound->s_creditcardclient_description) == NULL) {
    goto fail; //String
    }


    // creditcardclient_request_compound->b_creditcardclient_isactive
    if (!creditcardclient_request_compound->b_creditcardclient_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientIsactive", creditcardclient_request_compound->b_creditcardclient_isactive) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_request_compound->b_creditcardclient_allowedagencypayment
    if (!creditcardclient_request_compound->b_creditcardclient_allowedagencypayment) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientAllowedagencypayment", creditcardclient_request_compound->b_creditcardclient_allowedagencypayment) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_request_compound->b_creditcardclient_allowedroyallepageprotection
    if (!creditcardclient_request_compound->b_creditcardclient_allowedroyallepageprotection) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientAllowedroyallepageprotection", creditcardclient_request_compound->b_creditcardclient_allowedroyallepageprotection) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_request_compound->b_creditcardclient_allowedtranquillit
    if (!creditcardclient_request_compound->b_creditcardclient_allowedtranquillit) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientAllowedtranquillit", creditcardclient_request_compound->b_creditcardclient_allowedtranquillit) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_request_compound->obj_creditcarddetail
    if (!creditcardclient_request_compound->obj_creditcarddetail) {
        goto fail;
    }
    cJSON *obj_creditcarddetail_local_JSON = creditcarddetail_request_convertToJSON(creditcardclient_request_compound->obj_creditcarddetail);
    if(obj_creditcarddetail_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCreditcarddetail", obj_creditcarddetail_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // creditcardclient_request_compound->s_creditcardclient_cvv
    if (!creditcardclient_request_compound->s_creditcardclient_cvv) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardclientCVV", creditcardclient_request_compound->s_creditcardclient_cvv) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

creditcardclient_request_compound_t *creditcardclient_request_compound_parseFromJSON(cJSON *creditcardclient_request_compoundJSON){

    creditcardclient_request_compound_t *creditcardclient_request_compound_local_var = NULL;

    // define the local variable for creditcardclient_request_compound->obj_creditcarddetail
    creditcarddetail_request_t *obj_creditcarddetail_local_nonprim = NULL;

    // creditcardclient_request_compound->pki_creditcardclient_id
    cJSON *pki_creditcardclient_id = cJSON_GetObjectItemCaseSensitive(creditcardclient_request_compoundJSON, "pkiCreditcardclientID");
    if (pki_creditcardclient_id) { 
    if(!cJSON_IsNumber(pki_creditcardclient_id))
    {
    goto end; //Numeric
    }
    }

    // creditcardclient_request_compound->fks_creditcardtoken_id
    cJSON *fks_creditcardtoken_id = cJSON_GetObjectItemCaseSensitive(creditcardclient_request_compoundJSON, "fksCreditcardtokenID");
    if (fks_creditcardtoken_id) { 
    if(!cJSON_IsString(fks_creditcardtoken_id) && !cJSON_IsNull(fks_creditcardtoken_id))
    {
    goto end; //String
    }
    }

    // creditcardclient_request_compound->b_creditcardclientrelation_isdefault
    cJSON *b_creditcardclientrelation_isdefault = cJSON_GetObjectItemCaseSensitive(creditcardclient_request_compoundJSON, "bCreditcardclientrelationIsdefault");
    if (!b_creditcardclientrelation_isdefault) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclientrelation_isdefault))
    {
    goto end; //Bool
    }

    // creditcardclient_request_compound->s_creditcardclient_description
    cJSON *s_creditcardclient_description = cJSON_GetObjectItemCaseSensitive(creditcardclient_request_compoundJSON, "sCreditcardclientDescription");
    if (!s_creditcardclient_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardclient_description))
    {
    goto end; //String
    }

    // creditcardclient_request_compound->b_creditcardclient_isactive
    cJSON *b_creditcardclient_isactive = cJSON_GetObjectItemCaseSensitive(creditcardclient_request_compoundJSON, "bCreditcardclientIsactive");
    if (!b_creditcardclient_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_isactive))
    {
    goto end; //Bool
    }

    // creditcardclient_request_compound->b_creditcardclient_allowedagencypayment
    cJSON *b_creditcardclient_allowedagencypayment = cJSON_GetObjectItemCaseSensitive(creditcardclient_request_compoundJSON, "bCreditcardclientAllowedagencypayment");
    if (!b_creditcardclient_allowedagencypayment) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_allowedagencypayment))
    {
    goto end; //Bool
    }

    // creditcardclient_request_compound->b_creditcardclient_allowedroyallepageprotection
    cJSON *b_creditcardclient_allowedroyallepageprotection = cJSON_GetObjectItemCaseSensitive(creditcardclient_request_compoundJSON, "bCreditcardclientAllowedroyallepageprotection");
    if (!b_creditcardclient_allowedroyallepageprotection) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_allowedroyallepageprotection))
    {
    goto end; //Bool
    }

    // creditcardclient_request_compound->b_creditcardclient_allowedtranquillit
    cJSON *b_creditcardclient_allowedtranquillit = cJSON_GetObjectItemCaseSensitive(creditcardclient_request_compoundJSON, "bCreditcardclientAllowedtranquillit");
    if (!b_creditcardclient_allowedtranquillit) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_allowedtranquillit))
    {
    goto end; //Bool
    }

    // creditcardclient_request_compound->obj_creditcarddetail
    cJSON *obj_creditcarddetail = cJSON_GetObjectItemCaseSensitive(creditcardclient_request_compoundJSON, "objCreditcarddetail");
    if (!obj_creditcarddetail) {
        goto end;
    }

    
    obj_creditcarddetail_local_nonprim = creditcarddetail_request_parseFromJSON(obj_creditcarddetail); //nonprimitive

    // creditcardclient_request_compound->s_creditcardclient_cvv
    cJSON *s_creditcardclient_cvv = cJSON_GetObjectItemCaseSensitive(creditcardclient_request_compoundJSON, "sCreditcardclientCVV");
    if (!s_creditcardclient_cvv) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardclient_cvv))
    {
    goto end; //String
    }


    creditcardclient_request_compound_local_var = creditcardclient_request_compound_create (
        pki_creditcardclient_id ? pki_creditcardclient_id->valuedouble : 0,
        fks_creditcardtoken_id && !cJSON_IsNull(fks_creditcardtoken_id) ? strdup(fks_creditcardtoken_id->valuestring) : NULL,
        b_creditcardclientrelation_isdefault->valueint,
        strdup(s_creditcardclient_description->valuestring),
        b_creditcardclient_isactive->valueint,
        b_creditcardclient_allowedagencypayment->valueint,
        b_creditcardclient_allowedroyallepageprotection->valueint,
        b_creditcardclient_allowedtranquillit->valueint,
        obj_creditcarddetail_local_nonprim,
        strdup(s_creditcardclient_cvv->valuestring)
        );

    return creditcardclient_request_compound_local_var;
end:
    if (obj_creditcarddetail_local_nonprim) {
        creditcarddetail_request_free(obj_creditcarddetail_local_nonprim);
        obj_creditcarddetail_local_nonprim = NULL;
    }
    return NULL;

}
