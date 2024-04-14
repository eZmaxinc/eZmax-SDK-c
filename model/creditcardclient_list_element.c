#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardclient_list_element.h"



creditcardclient_list_element_t *creditcardclient_list_element_create(
    int pki_creditcardclient_id,
    int fki_creditcarddetail_id,
    int b_creditcardclientrelation_isdefault,
    char *s_creditcardclient_description,
    int b_creditcardclient_isactive,
    int b_creditcardclient_allowedagencypayment,
    int b_creditcardclient_allowedroyallepageprotection,
    int b_creditcardclient_allowedtranquillit,
    int i_creditcarddetail_expirationmonth,
    int i_creditcarddetail_expirationyear,
    char *s_creditcarddetail_numbermasked
    ) {
    creditcardclient_list_element_t *creditcardclient_list_element_local_var = malloc(sizeof(creditcardclient_list_element_t));
    if (!creditcardclient_list_element_local_var) {
        return NULL;
    }
    creditcardclient_list_element_local_var->pki_creditcardclient_id = pki_creditcardclient_id;
    creditcardclient_list_element_local_var->fki_creditcarddetail_id = fki_creditcarddetail_id;
    creditcardclient_list_element_local_var->b_creditcardclientrelation_isdefault = b_creditcardclientrelation_isdefault;
    creditcardclient_list_element_local_var->s_creditcardclient_description = s_creditcardclient_description;
    creditcardclient_list_element_local_var->b_creditcardclient_isactive = b_creditcardclient_isactive;
    creditcardclient_list_element_local_var->b_creditcardclient_allowedagencypayment = b_creditcardclient_allowedagencypayment;
    creditcardclient_list_element_local_var->b_creditcardclient_allowedroyallepageprotection = b_creditcardclient_allowedroyallepageprotection;
    creditcardclient_list_element_local_var->b_creditcardclient_allowedtranquillit = b_creditcardclient_allowedtranquillit;
    creditcardclient_list_element_local_var->i_creditcarddetail_expirationmonth = i_creditcarddetail_expirationmonth;
    creditcardclient_list_element_local_var->i_creditcarddetail_expirationyear = i_creditcarddetail_expirationyear;
    creditcardclient_list_element_local_var->s_creditcarddetail_numbermasked = s_creditcarddetail_numbermasked;

    return creditcardclient_list_element_local_var;
}


void creditcardclient_list_element_free(creditcardclient_list_element_t *creditcardclient_list_element) {
    if(NULL == creditcardclient_list_element){
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardclient_list_element->s_creditcardclient_description) {
        free(creditcardclient_list_element->s_creditcardclient_description);
        creditcardclient_list_element->s_creditcardclient_description = NULL;
    }
    if (creditcardclient_list_element->s_creditcarddetail_numbermasked) {
        free(creditcardclient_list_element->s_creditcarddetail_numbermasked);
        creditcardclient_list_element->s_creditcarddetail_numbermasked = NULL;
    }
    free(creditcardclient_list_element);
}

cJSON *creditcardclient_list_element_convertToJSON(creditcardclient_list_element_t *creditcardclient_list_element) {
    cJSON *item = cJSON_CreateObject();

    // creditcardclient_list_element->pki_creditcardclient_id
    if (!creditcardclient_list_element->pki_creditcardclient_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCreditcardclientID", creditcardclient_list_element->pki_creditcardclient_id) == NULL) {
    goto fail; //Numeric
    }


    // creditcardclient_list_element->fki_creditcarddetail_id
    if (!creditcardclient_list_element->fki_creditcarddetail_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCreditcarddetailID", creditcardclient_list_element->fki_creditcarddetail_id) == NULL) {
    goto fail; //Numeric
    }


    // creditcardclient_list_element->b_creditcardclientrelation_isdefault
    if (!creditcardclient_list_element->b_creditcardclientrelation_isdefault) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientrelationIsdefault", creditcardclient_list_element->b_creditcardclientrelation_isdefault) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_list_element->s_creditcardclient_description
    if (!creditcardclient_list_element->s_creditcardclient_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardclientDescription", creditcardclient_list_element->s_creditcardclient_description) == NULL) {
    goto fail; //String
    }


    // creditcardclient_list_element->b_creditcardclient_isactive
    if (!creditcardclient_list_element->b_creditcardclient_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientIsactive", creditcardclient_list_element->b_creditcardclient_isactive) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_list_element->b_creditcardclient_allowedagencypayment
    if (!creditcardclient_list_element->b_creditcardclient_allowedagencypayment) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientAllowedagencypayment", creditcardclient_list_element->b_creditcardclient_allowedagencypayment) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_list_element->b_creditcardclient_allowedroyallepageprotection
    if (!creditcardclient_list_element->b_creditcardclient_allowedroyallepageprotection) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientAllowedroyallepageprotection", creditcardclient_list_element->b_creditcardclient_allowedroyallepageprotection) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_list_element->b_creditcardclient_allowedtranquillit
    if (!creditcardclient_list_element->b_creditcardclient_allowedtranquillit) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientAllowedtranquillit", creditcardclient_list_element->b_creditcardclient_allowedtranquillit) == NULL) {
    goto fail; //Bool
    }


    // creditcardclient_list_element->i_creditcarddetail_expirationmonth
    if (!creditcardclient_list_element->i_creditcarddetail_expirationmonth) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCreditcarddetailExpirationmonth", creditcardclient_list_element->i_creditcarddetail_expirationmonth) == NULL) {
    goto fail; //Numeric
    }


    // creditcardclient_list_element->i_creditcarddetail_expirationyear
    if (!creditcardclient_list_element->i_creditcarddetail_expirationyear) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCreditcarddetailExpirationyear", creditcardclient_list_element->i_creditcarddetail_expirationyear) == NULL) {
    goto fail; //Numeric
    }


    // creditcardclient_list_element->s_creditcarddetail_numbermasked
    if (!creditcardclient_list_element->s_creditcarddetail_numbermasked) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcarddetailNumbermasked", creditcardclient_list_element->s_creditcarddetail_numbermasked) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

creditcardclient_list_element_t *creditcardclient_list_element_parseFromJSON(cJSON *creditcardclient_list_elementJSON){

    creditcardclient_list_element_t *creditcardclient_list_element_local_var = NULL;

    // creditcardclient_list_element->pki_creditcardclient_id
    cJSON *pki_creditcardclient_id = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "pkiCreditcardclientID");
    if (!pki_creditcardclient_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_creditcardclient_id))
    {
    goto end; //Numeric
    }

    // creditcardclient_list_element->fki_creditcarddetail_id
    cJSON *fki_creditcarddetail_id = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "fkiCreditcarddetailID");
    if (!fki_creditcarddetail_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_creditcarddetail_id))
    {
    goto end; //Numeric
    }

    // creditcardclient_list_element->b_creditcardclientrelation_isdefault
    cJSON *b_creditcardclientrelation_isdefault = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "bCreditcardclientrelationIsdefault");
    if (!b_creditcardclientrelation_isdefault) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclientrelation_isdefault))
    {
    goto end; //Bool
    }

    // creditcardclient_list_element->s_creditcardclient_description
    cJSON *s_creditcardclient_description = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "sCreditcardclientDescription");
    if (!s_creditcardclient_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardclient_description))
    {
    goto end; //String
    }

    // creditcardclient_list_element->b_creditcardclient_isactive
    cJSON *b_creditcardclient_isactive = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "bCreditcardclientIsactive");
    if (!b_creditcardclient_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_isactive))
    {
    goto end; //Bool
    }

    // creditcardclient_list_element->b_creditcardclient_allowedagencypayment
    cJSON *b_creditcardclient_allowedagencypayment = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "bCreditcardclientAllowedagencypayment");
    if (!b_creditcardclient_allowedagencypayment) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_allowedagencypayment))
    {
    goto end; //Bool
    }

    // creditcardclient_list_element->b_creditcardclient_allowedroyallepageprotection
    cJSON *b_creditcardclient_allowedroyallepageprotection = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "bCreditcardclientAllowedroyallepageprotection");
    if (!b_creditcardclient_allowedroyallepageprotection) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_allowedroyallepageprotection))
    {
    goto end; //Bool
    }

    // creditcardclient_list_element->b_creditcardclient_allowedtranquillit
    cJSON *b_creditcardclient_allowedtranquillit = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "bCreditcardclientAllowedtranquillit");
    if (!b_creditcardclient_allowedtranquillit) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardclient_allowedtranquillit))
    {
    goto end; //Bool
    }

    // creditcardclient_list_element->i_creditcarddetail_expirationmonth
    cJSON *i_creditcarddetail_expirationmonth = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "iCreditcarddetailExpirationmonth");
    if (!i_creditcarddetail_expirationmonth) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_creditcarddetail_expirationmonth))
    {
    goto end; //Numeric
    }

    // creditcardclient_list_element->i_creditcarddetail_expirationyear
    cJSON *i_creditcarddetail_expirationyear = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "iCreditcarddetailExpirationyear");
    if (!i_creditcarddetail_expirationyear) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_creditcarddetail_expirationyear))
    {
    goto end; //Numeric
    }

    // creditcardclient_list_element->s_creditcarddetail_numbermasked
    cJSON *s_creditcarddetail_numbermasked = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "sCreditcarddetailNumbermasked");
    if (!s_creditcarddetail_numbermasked) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcarddetail_numbermasked))
    {
    goto end; //String
    }


    creditcardclient_list_element_local_var = creditcardclient_list_element_create (
        pki_creditcardclient_id->valuedouble,
        fki_creditcarddetail_id->valuedouble,
        b_creditcardclientrelation_isdefault->valueint,
        strdup(s_creditcardclient_description->valuestring),
        b_creditcardclient_isactive->valueint,
        b_creditcardclient_allowedagencypayment->valueint,
        b_creditcardclient_allowedroyallepageprotection->valueint,
        b_creditcardclient_allowedtranquillit->valueint,
        i_creditcarddetail_expirationmonth->valuedouble,
        i_creditcarddetail_expirationyear->valuedouble,
        strdup(s_creditcarddetail_numbermasked->valuestring)
        );

    return creditcardclient_list_element_local_var;
end:
    return NULL;

}
