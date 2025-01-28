#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardclient_list_element.h"



static creditcardclient_list_element_t *creditcardclient_list_element_create_internal(
    int pki_creditcardclient_id,
    int fki_creditcarddetail_id,
    int fki_creditcardtype_id,
    int b_creditcardclientrelation_isdefault,
    char *s_creditcardclient_description,
    int b_creditcardclient_allowedcompanypayment,
    int b_creditcardclient_allowedtranquillit,
    int i_creditcarddetail_expirationmonth,
    int i_creditcarddetail_expirationyear,
    int i_creditcarddetail_lastdigits
    ) {
    creditcardclient_list_element_t *creditcardclient_list_element_local_var = malloc(sizeof(creditcardclient_list_element_t));
    if (!creditcardclient_list_element_local_var) {
        return NULL;
    }
    creditcardclient_list_element_local_var->pki_creditcardclient_id = pki_creditcardclient_id;
    creditcardclient_list_element_local_var->fki_creditcarddetail_id = fki_creditcarddetail_id;
    creditcardclient_list_element_local_var->fki_creditcardtype_id = fki_creditcardtype_id;
    creditcardclient_list_element_local_var->b_creditcardclientrelation_isdefault = b_creditcardclientrelation_isdefault;
    creditcardclient_list_element_local_var->s_creditcardclient_description = s_creditcardclient_description;
    creditcardclient_list_element_local_var->b_creditcardclient_allowedcompanypayment = b_creditcardclient_allowedcompanypayment;
    creditcardclient_list_element_local_var->b_creditcardclient_allowedtranquillit = b_creditcardclient_allowedtranquillit;
    creditcardclient_list_element_local_var->i_creditcarddetail_expirationmonth = i_creditcarddetail_expirationmonth;
    creditcardclient_list_element_local_var->i_creditcarddetail_expirationyear = i_creditcarddetail_expirationyear;
    creditcardclient_list_element_local_var->i_creditcarddetail_lastdigits = i_creditcarddetail_lastdigits;

    creditcardclient_list_element_local_var->_library_owned = 1;
    return creditcardclient_list_element_local_var;
}

__attribute__((deprecated)) creditcardclient_list_element_t *creditcardclient_list_element_create(
    int pki_creditcardclient_id,
    int fki_creditcarddetail_id,
    int fki_creditcardtype_id,
    int b_creditcardclientrelation_isdefault,
    char *s_creditcardclient_description,
    int b_creditcardclient_allowedcompanypayment,
    int b_creditcardclient_allowedtranquillit,
    int i_creditcarddetail_expirationmonth,
    int i_creditcarddetail_expirationyear,
    int i_creditcarddetail_lastdigits
    ) {
    return creditcardclient_list_element_create_internal (
        pki_creditcardclient_id,
        fki_creditcarddetail_id,
        fki_creditcardtype_id,
        b_creditcardclientrelation_isdefault,
        s_creditcardclient_description,
        b_creditcardclient_allowedcompanypayment,
        b_creditcardclient_allowedtranquillit,
        i_creditcarddetail_expirationmonth,
        i_creditcarddetail_expirationyear,
        i_creditcarddetail_lastdigits
        );
}

void creditcardclient_list_element_free(creditcardclient_list_element_t *creditcardclient_list_element) {
    if(NULL == creditcardclient_list_element){
        return ;
    }
    if(creditcardclient_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcardclient_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardclient_list_element->s_creditcardclient_description) {
        free(creditcardclient_list_element->s_creditcardclient_description);
        creditcardclient_list_element->s_creditcardclient_description = NULL;
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


    // creditcardclient_list_element->fki_creditcardtype_id
    if (!creditcardclient_list_element->fki_creditcardtype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCreditcardtypeID", creditcardclient_list_element->fki_creditcardtype_id) == NULL) {
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


    // creditcardclient_list_element->b_creditcardclient_allowedcompanypayment
    if (!creditcardclient_list_element->b_creditcardclient_allowedcompanypayment) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardclientAllowedcompanypayment", creditcardclient_list_element->b_creditcardclient_allowedcompanypayment) == NULL) {
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


    // creditcardclient_list_element->i_creditcarddetail_lastdigits
    if (!creditcardclient_list_element->i_creditcarddetail_lastdigits) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCreditcarddetailLastdigits", creditcardclient_list_element->i_creditcarddetail_lastdigits) == NULL) {
    goto fail; //Numeric
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

    // creditcardclient_list_element->fki_creditcarddetail_id
    cJSON *fki_creditcarddetail_id = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "fkiCreditcarddetailID");
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

    // creditcardclient_list_element->fki_creditcardtype_id
    cJSON *fki_creditcardtype_id = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "fkiCreditcardtypeID");
    if (cJSON_IsNull(fki_creditcardtype_id)) {
        fki_creditcardtype_id = NULL;
    }
    if (!fki_creditcardtype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_creditcardtype_id))
    {
    goto end; //Numeric
    }

    // creditcardclient_list_element->b_creditcardclientrelation_isdefault
    cJSON *b_creditcardclientrelation_isdefault = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "bCreditcardclientrelationIsdefault");
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

    // creditcardclient_list_element->s_creditcardclient_description
    cJSON *s_creditcardclient_description = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "sCreditcardclientDescription");
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

    // creditcardclient_list_element->b_creditcardclient_allowedcompanypayment
    cJSON *b_creditcardclient_allowedcompanypayment = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "bCreditcardclientAllowedcompanypayment");
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

    // creditcardclient_list_element->b_creditcardclient_allowedtranquillit
    cJSON *b_creditcardclient_allowedtranquillit = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "bCreditcardclientAllowedtranquillit");
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

    // creditcardclient_list_element->i_creditcarddetail_expirationmonth
    cJSON *i_creditcarddetail_expirationmonth = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "iCreditcarddetailExpirationmonth");
    if (cJSON_IsNull(i_creditcarddetail_expirationmonth)) {
        i_creditcarddetail_expirationmonth = NULL;
    }
    if (!i_creditcarddetail_expirationmonth) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_creditcarddetail_expirationmonth))
    {
    goto end; //Numeric
    }

    // creditcardclient_list_element->i_creditcarddetail_expirationyear
    cJSON *i_creditcarddetail_expirationyear = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "iCreditcarddetailExpirationyear");
    if (cJSON_IsNull(i_creditcarddetail_expirationyear)) {
        i_creditcarddetail_expirationyear = NULL;
    }
    if (!i_creditcarddetail_expirationyear) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_creditcarddetail_expirationyear))
    {
    goto end; //Numeric
    }

    // creditcardclient_list_element->i_creditcarddetail_lastdigits
    cJSON *i_creditcarddetail_lastdigits = cJSON_GetObjectItemCaseSensitive(creditcardclient_list_elementJSON, "iCreditcarddetailLastdigits");
    if (cJSON_IsNull(i_creditcarddetail_lastdigits)) {
        i_creditcarddetail_lastdigits = NULL;
    }
    if (!i_creditcarddetail_lastdigits) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_creditcarddetail_lastdigits))
    {
    goto end; //Numeric
    }


    creditcardclient_list_element_local_var = creditcardclient_list_element_create_internal (
        pki_creditcardclient_id->valuedouble,
        fki_creditcarddetail_id->valuedouble,
        fki_creditcardtype_id->valuedouble,
        b_creditcardclientrelation_isdefault->valueint,
        strdup(s_creditcardclient_description->valuestring),
        b_creditcardclient_allowedcompanypayment->valueint,
        b_creditcardclient_allowedtranquillit->valueint,
        i_creditcarddetail_expirationmonth->valuedouble,
        i_creditcarddetail_expirationyear->valuedouble,
        i_creditcarddetail_lastdigits->valuedouble
        );

    return creditcardclient_list_element_local_var;
end:
    return NULL;

}
