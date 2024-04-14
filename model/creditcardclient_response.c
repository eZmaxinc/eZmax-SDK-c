#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardclient_response.h"



creditcardclient_response_t *creditcardclient_response_create(
    int pki_creditcardclient_id,
    int fki_creditcarddetail_id,
    int b_creditcardclientrelation_isdefault,
    char *s_creditcardclient_description,
    int b_creditcardclient_isactive,
    int b_creditcardclient_allowedagencypayment,
    int b_creditcardclient_allowedroyallepageprotection,
    int b_creditcardclient_allowedtranquillit,
    creditcarddetail_response_compound_t *obj_creditcarddetail
    ) {
    creditcardclient_response_t *creditcardclient_response_local_var = malloc(sizeof(creditcardclient_response_t));
    if (!creditcardclient_response_local_var) {
        return NULL;
    }
    creditcardclient_response_local_var->pki_creditcardclient_id = pki_creditcardclient_id;
    creditcardclient_response_local_var->fki_creditcarddetail_id = fki_creditcarddetail_id;
    creditcardclient_response_local_var->b_creditcardclientrelation_isdefault = b_creditcardclientrelation_isdefault;
    creditcardclient_response_local_var->s_creditcardclient_description = s_creditcardclient_description;
    creditcardclient_response_local_var->b_creditcardclient_isactive = b_creditcardclient_isactive;
    creditcardclient_response_local_var->b_creditcardclient_allowedagencypayment = b_creditcardclient_allowedagencypayment;
    creditcardclient_response_local_var->b_creditcardclient_allowedroyallepageprotection = b_creditcardclient_allowedroyallepageprotection;
    creditcardclient_response_local_var->b_creditcardclient_allowedtranquillit = b_creditcardclient_allowedtranquillit;
    creditcardclient_response_local_var->obj_creditcarddetail = obj_creditcarddetail;

    return creditcardclient_response_local_var;
}


void creditcardclient_response_free(creditcardclient_response_t *creditcardclient_response) {
    if(NULL == creditcardclient_response){
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardclient_response->s_creditcardclient_description) {
        free(creditcardclient_response->s_creditcardclient_description);
        creditcardclient_response->s_creditcardclient_description = NULL;
    }
    if (creditcardclient_response->obj_creditcarddetail) {
        creditcarddetail_response_compound_free(creditcardclient_response->obj_creditcarddetail);
        creditcardclient_response->obj_creditcarddetail = NULL;
    }
    free(creditcardclient_response);
}

cJSON *creditcardclient_response_convertToJSON(creditcardclient_response_t *creditcardclient_response) {
    cJSON *item = cJSON_CreateObject();

    // creditcardclient_response->pki_creditcardclient_id
    if (!creditcardclient_response->pki_creditcardclient_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCreditcardclientID", creditcardclient_response->pki_creditcardclient_id) == NULL) {
    goto fail; //Numeric
    }


    // creditcardclient_response->fki_creditcarddetail_id
    if (!creditcardclient_response->fki_creditcarddetail_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCreditcarddetailID", creditcardclient_response->fki_creditcarddetail_id) == NULL) {
    goto fail; //Numeric
    }


    // creditcardclient_response->b_creditcardclientrelation_isdefault
    if (!creditcardclient_response->b_creditcardclientrelation_isdefault) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientrelationIsdefault", creditcardclient_response->b_creditcardclientrelation_isdefault) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_response->s_creditcardclient_description
    if (!creditcardclient_response->s_creditcardclient_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardclientDescription", creditcardclient_response->s_creditcardclient_description) == NULL) {
    goto fail; //String
    }


    // creditcardclient_response->b_creditcardclient_isactive
    if (!creditcardclient_response->b_creditcardclient_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientIsactive", creditcardclient_response->b_creditcardclient_isactive) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_response->b_creditcardclient_allowedagencypayment
    if (!creditcardclient_response->b_creditcardclient_allowedagencypayment) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientAllowedagencypayment", creditcardclient_response->b_creditcardclient_allowedagencypayment) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_response->b_creditcardclient_allowedroyallepageprotection
    if (!creditcardclient_response->b_creditcardclient_allowedroyallepageprotection) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientAllowedroyallepageprotection", creditcardclient_response->b_creditcardclient_allowedroyallepageprotection) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_response->b_creditcardclient_allowedtranquillit
    if (!creditcardclient_response->b_creditcardclient_allowedtranquillit) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientAllowedtranquillit", creditcardclient_response->b_creditcardclient_allowedtranquillit) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_response->obj_creditcarddetail
    if (!creditcardclient_response->obj_creditcarddetail) {
        goto fail;
    }
    cJSON *obj_creditcarddetail_local_JSON = creditcarddetail_response_compound_convertToJSON(creditcardclient_response->obj_creditcarddetail);
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

creditcardclient_response_t *creditcardclient_response_parseFromJSON(cJSON *creditcardclient_responseJSON){

    creditcardclient_response_t *creditcardclient_response_local_var = NULL;

    // define the local variable for creditcardclient_response->obj_creditcarddetail
    creditcarddetail_response_compound_t *obj_creditcarddetail_local_nonprim = NULL;

    // creditcardclient_response->pki_creditcardclient_id
    cJSON *pki_creditcardclient_id = cJSON_GetObjectItemCaseSensitive(creditcardclient_responseJSON, "pkiCreditcardclientID");
    if (!pki_creditcardclient_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_creditcardclient_id))
    {
    goto end; //Numeric
    }

    // creditcardclient_response->fki_creditcarddetail_id
    cJSON *fki_creditcarddetail_id = cJSON_GetObjectItemCaseSensitive(creditcardclient_responseJSON, "fkiCreditcarddetailID");
    if (!fki_creditcarddetail_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_creditcarddetail_id))
    {
    goto end; //Numeric
    }

    // creditcardclient_response->b_creditcardclientrelation_isdefault
    cJSON *b_creditcardclientrelation_isdefault = cJSON_GetObjectItemCaseSensitive(creditcardclient_responseJSON, "bCreditcardclientrelationIsdefault");
    if (!b_creditcardclientrelation_isdefault) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclientrelation_isdefault))
    {
    goto end; //Bool
    }

    // creditcardclient_response->s_creditcardclient_description
    cJSON *s_creditcardclient_description = cJSON_GetObjectItemCaseSensitive(creditcardclient_responseJSON, "sCreditcardclientDescription");
    if (!s_creditcardclient_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardclient_description))
    {
    goto end; //String
    }

    // creditcardclient_response->b_creditcardclient_isactive
    cJSON *b_creditcardclient_isactive = cJSON_GetObjectItemCaseSensitive(creditcardclient_responseJSON, "bCreditcardclientIsactive");
    if (!b_creditcardclient_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_isactive))
    {
    goto end; //Bool
    }

    // creditcardclient_response->b_creditcardclient_allowedagencypayment
    cJSON *b_creditcardclient_allowedagencypayment = cJSON_GetObjectItemCaseSensitive(creditcardclient_responseJSON, "bCreditcardclientAllowedagencypayment");
    if (!b_creditcardclient_allowedagencypayment) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_allowedagencypayment))
    {
    goto end; //Bool
    }

    // creditcardclient_response->b_creditcardclient_allowedroyallepageprotection
    cJSON *b_creditcardclient_allowedroyallepageprotection = cJSON_GetObjectItemCaseSensitive(creditcardclient_responseJSON, "bCreditcardclientAllowedroyallepageprotection");
    if (!b_creditcardclient_allowedroyallepageprotection) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_allowedroyallepageprotection))
    {
    goto end; //Bool
    }

    // creditcardclient_response->b_creditcardclient_allowedtranquillit
    cJSON *b_creditcardclient_allowedtranquillit = cJSON_GetObjectItemCaseSensitive(creditcardclient_responseJSON, "bCreditcardclientAllowedtranquillit");
    if (!b_creditcardclient_allowedtranquillit) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_allowedtranquillit))
    {
    goto end; //Bool
    }

    // creditcardclient_response->obj_creditcarddetail
    cJSON *obj_creditcarddetail = cJSON_GetObjectItemCaseSensitive(creditcardclient_responseJSON, "objCreditcarddetail");
    if (!obj_creditcarddetail) {
        goto end;
    }

    
    obj_creditcarddetail_local_nonprim = creditcarddetail_response_compound_parseFromJSON(obj_creditcarddetail); //nonprimitive


    creditcardclient_response_local_var = creditcardclient_response_create (
        pki_creditcardclient_id->valuedouble,
        fki_creditcarddetail_id->valuedouble,
        b_creditcardclientrelation_isdefault->valueint,
        strdup(s_creditcardclient_description->valuestring),
        b_creditcardclient_isactive->valueint,
        b_creditcardclient_allowedagencypayment->valueint,
        b_creditcardclient_allowedroyallepageprotection->valueint,
        b_creditcardclient_allowedtranquillit->valueint,
        obj_creditcarddetail_local_nonprim
        );

    return creditcardclient_response_local_var;
end:
    if (obj_creditcarddetail_local_nonprim) {
        creditcarddetail_response_compound_free(obj_creditcarddetail_local_nonprim);
        obj_creditcarddetail_local_nonprim = NULL;
    }
    return NULL;

}
