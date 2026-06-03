#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcarddetail_response.h"



static creditcarddetail_response_t *creditcarddetail_response_create_internal(
    int *pki_creditcarddetail_id,
    int *fki_creditcardtype_id,
    int *i_creditcarddetail_lastdigits,
    int *i_creditcarddetail_expirationmonth,
    int *i_creditcarddetail_expirationyear,
    char *s_creditcarddetail_civic,
    char *s_creditcarddetail_street,
    char *s_creditcarddetail_zip
    ) {
    creditcarddetail_response_t *creditcarddetail_response_local_var = malloc(sizeof(creditcarddetail_response_t));
    if (!creditcarddetail_response_local_var) {
        return NULL;
    }
    memset(creditcarddetail_response_local_var, 0, sizeof(creditcarddetail_response_t));
    creditcarddetail_response_local_var->_library_owned = 1;
    creditcarddetail_response_local_var->pki_creditcarddetail_id = pki_creditcarddetail_id;
    creditcarddetail_response_local_var->fki_creditcardtype_id = fki_creditcardtype_id;
    creditcarddetail_response_local_var->i_creditcarddetail_lastdigits = i_creditcarddetail_lastdigits;
    creditcarddetail_response_local_var->i_creditcarddetail_expirationmonth = i_creditcarddetail_expirationmonth;
    creditcarddetail_response_local_var->i_creditcarddetail_expirationyear = i_creditcarddetail_expirationyear;
    creditcarddetail_response_local_var->s_creditcarddetail_civic = s_creditcarddetail_civic;
    creditcarddetail_response_local_var->s_creditcarddetail_street = s_creditcarddetail_street;
    creditcarddetail_response_local_var->s_creditcarddetail_zip = s_creditcarddetail_zip;
    return creditcarddetail_response_local_var;
}

__attribute__((deprecated)) creditcarddetail_response_t *creditcarddetail_response_create(
    int *pki_creditcarddetail_id,
    int *fki_creditcardtype_id,
    int *i_creditcarddetail_lastdigits,
    int *i_creditcarddetail_expirationmonth,
    int *i_creditcarddetail_expirationyear,
    char *s_creditcarddetail_civic,
    char *s_creditcarddetail_street,
    char *s_creditcarddetail_zip
    ) {
    int *pki_creditcarddetail_id_copy = NULL;
    if (pki_creditcarddetail_id) {
        pki_creditcarddetail_id_copy = malloc(sizeof(int));
        if (pki_creditcarddetail_id_copy) *pki_creditcarddetail_id_copy = *pki_creditcarddetail_id;
    }
    int *fki_creditcardtype_id_copy = NULL;
    if (fki_creditcardtype_id) {
        fki_creditcardtype_id_copy = malloc(sizeof(int));
        if (fki_creditcardtype_id_copy) *fki_creditcardtype_id_copy = *fki_creditcardtype_id;
    }
    int *i_creditcarddetail_lastdigits_copy = NULL;
    if (i_creditcarddetail_lastdigits) {
        i_creditcarddetail_lastdigits_copy = malloc(sizeof(int));
        if (i_creditcarddetail_lastdigits_copy) *i_creditcarddetail_lastdigits_copy = *i_creditcarddetail_lastdigits;
    }
    int *i_creditcarddetail_expirationmonth_copy = NULL;
    if (i_creditcarddetail_expirationmonth) {
        i_creditcarddetail_expirationmonth_copy = malloc(sizeof(int));
        if (i_creditcarddetail_expirationmonth_copy) *i_creditcarddetail_expirationmonth_copy = *i_creditcarddetail_expirationmonth;
    }
    int *i_creditcarddetail_expirationyear_copy = NULL;
    if (i_creditcarddetail_expirationyear) {
        i_creditcarddetail_expirationyear_copy = malloc(sizeof(int));
        if (i_creditcarddetail_expirationyear_copy) *i_creditcarddetail_expirationyear_copy = *i_creditcarddetail_expirationyear;
    }
    creditcarddetail_response_t *result = creditcarddetail_response_create_internal (
        pki_creditcarddetail_id_copy,
        fki_creditcardtype_id_copy,
        i_creditcarddetail_lastdigits_copy,
        i_creditcarddetail_expirationmonth_copy,
        i_creditcarddetail_expirationyear_copy,
        s_creditcarddetail_civic,
        s_creditcarddetail_street,
        s_creditcarddetail_zip
        );
    if (!result) {
        free(pki_creditcarddetail_id_copy);
        free(fki_creditcardtype_id_copy);
        free(i_creditcarddetail_lastdigits_copy);
        free(i_creditcarddetail_expirationmonth_copy);
        free(i_creditcarddetail_expirationyear_copy);
    }
    return result;
}

void creditcarddetail_response_free(creditcarddetail_response_t *creditcarddetail_response) {
    if(NULL == creditcarddetail_response){
        return ;
    }
    if(creditcarddetail_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcarddetail_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcarddetail_response->pki_creditcarddetail_id) {
        free(creditcarddetail_response->pki_creditcarddetail_id);
        creditcarddetail_response->pki_creditcarddetail_id = NULL;
    }
    if (creditcarddetail_response->fki_creditcardtype_id) {
        free(creditcarddetail_response->fki_creditcardtype_id);
        creditcarddetail_response->fki_creditcardtype_id = NULL;
    }
    if (creditcarddetail_response->i_creditcarddetail_lastdigits) {
        free(creditcarddetail_response->i_creditcarddetail_lastdigits);
        creditcarddetail_response->i_creditcarddetail_lastdigits = NULL;
    }
    if (creditcarddetail_response->i_creditcarddetail_expirationmonth) {
        free(creditcarddetail_response->i_creditcarddetail_expirationmonth);
        creditcarddetail_response->i_creditcarddetail_expirationmonth = NULL;
    }
    if (creditcarddetail_response->i_creditcarddetail_expirationyear) {
        free(creditcarddetail_response->i_creditcarddetail_expirationyear);
        creditcarddetail_response->i_creditcarddetail_expirationyear = NULL;
    }
    if (creditcarddetail_response->s_creditcarddetail_civic) {
        free(creditcarddetail_response->s_creditcarddetail_civic);
        creditcarddetail_response->s_creditcarddetail_civic = NULL;
    }
    if (creditcarddetail_response->s_creditcarddetail_street) {
        free(creditcarddetail_response->s_creditcarddetail_street);
        creditcarddetail_response->s_creditcarddetail_street = NULL;
    }
    if (creditcarddetail_response->s_creditcarddetail_zip) {
        free(creditcarddetail_response->s_creditcarddetail_zip);
        creditcarddetail_response->s_creditcarddetail_zip = NULL;
    }
    free(creditcarddetail_response);
}

cJSON *creditcarddetail_response_convertToJSON(creditcarddetail_response_t *creditcarddetail_response) {
    cJSON *item = cJSON_CreateObject();

    // creditcarddetail_response->pki_creditcarddetail_id
    if (!creditcarddetail_response->pki_creditcarddetail_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCreditcarddetailID", *creditcarddetail_response->pki_creditcarddetail_id) == NULL) {
    goto fail; //Numeric
    }


    // creditcarddetail_response->fki_creditcardtype_id
    if (!creditcarddetail_response->fki_creditcardtype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCreditcardtypeID", *creditcarddetail_response->fki_creditcardtype_id) == NULL) {
    goto fail; //Numeric
    }


    // creditcarddetail_response->i_creditcarddetail_lastdigits
    if (!creditcarddetail_response->i_creditcarddetail_lastdigits) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCreditcarddetailLastdigits", *creditcarddetail_response->i_creditcarddetail_lastdigits) == NULL) {
    goto fail; //Numeric
    }


    // creditcarddetail_response->i_creditcarddetail_expirationmonth
    if (!creditcarddetail_response->i_creditcarddetail_expirationmonth) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCreditcarddetailExpirationmonth", *creditcarddetail_response->i_creditcarddetail_expirationmonth) == NULL) {
    goto fail; //Numeric
    }


    // creditcarddetail_response->i_creditcarddetail_expirationyear
    if (!creditcarddetail_response->i_creditcarddetail_expirationyear) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCreditcarddetailExpirationyear", *creditcarddetail_response->i_creditcarddetail_expirationyear) == NULL) {
    goto fail; //Numeric
    }


    // creditcarddetail_response->s_creditcarddetail_civic
    if (!creditcarddetail_response->s_creditcarddetail_civic) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcarddetailCivic", creditcarddetail_response->s_creditcarddetail_civic) == NULL) {
    goto fail; //String
    }


    // creditcarddetail_response->s_creditcarddetail_street
    if (!creditcarddetail_response->s_creditcarddetail_street) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcarddetailStreet", creditcarddetail_response->s_creditcarddetail_street) == NULL) {
    goto fail; //String
    }


    // creditcarddetail_response->s_creditcarddetail_zip
    if (!creditcarddetail_response->s_creditcarddetail_zip) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcarddetailZip", creditcarddetail_response->s_creditcarddetail_zip) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

creditcarddetail_response_t *creditcarddetail_response_parseFromJSON(cJSON *creditcarddetail_responseJSON){

    creditcarddetail_response_t *creditcarddetail_response_local_var = NULL;

    // define the local variable for creditcarddetail_response->pki_creditcarddetail_id
    int *pki_creditcarddetail_id_local_var = NULL;

    // define the local variable for creditcarddetail_response->fki_creditcardtype_id
    int *fki_creditcardtype_id_local_var = NULL;

    // define the local variable for creditcarddetail_response->i_creditcarddetail_lastdigits
    int *i_creditcarddetail_lastdigits_local_var = NULL;

    // define the local variable for creditcarddetail_response->i_creditcarddetail_expirationmonth
    int *i_creditcarddetail_expirationmonth_local_var = NULL;

    // define the local variable for creditcarddetail_response->i_creditcarddetail_expirationyear
    int *i_creditcarddetail_expirationyear_local_var = NULL;

    char *s_creditcarddetail_civic_local_str = NULL;

    char *s_creditcarddetail_street_local_str = NULL;

    char *s_creditcarddetail_zip_local_str = NULL;

    // creditcarddetail_response->pki_creditcarddetail_id
    cJSON *pki_creditcarddetail_id = cJSON_GetObjectItemCaseSensitive(creditcarddetail_responseJSON, "pkiCreditcarddetailID");
    if (cJSON_IsNull(pki_creditcarddetail_id)) {
        pki_creditcarddetail_id = NULL;
    }
    if (!pki_creditcarddetail_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_creditcarddetail_id))
    {
    goto end; //Numeric
    }
    pki_creditcarddetail_id_local_var = malloc(sizeof(int));
    if(!pki_creditcarddetail_id_local_var)
    {
        goto end;
    }
    *pki_creditcarddetail_id_local_var = pki_creditcarddetail_id->valuedouble;

    // creditcarddetail_response->fki_creditcardtype_id
    cJSON *fki_creditcardtype_id = cJSON_GetObjectItemCaseSensitive(creditcarddetail_responseJSON, "fkiCreditcardtypeID");
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
    fki_creditcardtype_id_local_var = malloc(sizeof(int));
    if(!fki_creditcardtype_id_local_var)
    {
        goto end;
    }
    *fki_creditcardtype_id_local_var = fki_creditcardtype_id->valuedouble;

    // creditcarddetail_response->i_creditcarddetail_lastdigits
    cJSON *i_creditcarddetail_lastdigits = cJSON_GetObjectItemCaseSensitive(creditcarddetail_responseJSON, "iCreditcarddetailLastdigits");
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
    i_creditcarddetail_lastdigits_local_var = malloc(sizeof(int));
    if(!i_creditcarddetail_lastdigits_local_var)
    {
        goto end;
    }
    *i_creditcarddetail_lastdigits_local_var = i_creditcarddetail_lastdigits->valuedouble;

    // creditcarddetail_response->i_creditcarddetail_expirationmonth
    cJSON *i_creditcarddetail_expirationmonth = cJSON_GetObjectItemCaseSensitive(creditcarddetail_responseJSON, "iCreditcarddetailExpirationmonth");
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
    i_creditcarddetail_expirationmonth_local_var = malloc(sizeof(int));
    if(!i_creditcarddetail_expirationmonth_local_var)
    {
        goto end;
    }
    *i_creditcarddetail_expirationmonth_local_var = i_creditcarddetail_expirationmonth->valuedouble;

    // creditcarddetail_response->i_creditcarddetail_expirationyear
    cJSON *i_creditcarddetail_expirationyear = cJSON_GetObjectItemCaseSensitive(creditcarddetail_responseJSON, "iCreditcarddetailExpirationyear");
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
    i_creditcarddetail_expirationyear_local_var = malloc(sizeof(int));
    if(!i_creditcarddetail_expirationyear_local_var)
    {
        goto end;
    }
    *i_creditcarddetail_expirationyear_local_var = i_creditcarddetail_expirationyear->valuedouble;

    // creditcarddetail_response->s_creditcarddetail_civic
    cJSON *s_creditcarddetail_civic = cJSON_GetObjectItemCaseSensitive(creditcarddetail_responseJSON, "sCreditcarddetailCivic");
    if (cJSON_IsNull(s_creditcarddetail_civic)) {
        s_creditcarddetail_civic = NULL;
    }
    if (!s_creditcarddetail_civic) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcarddetail_civic))
    {
    goto end; //String
    }

    // creditcarddetail_response->s_creditcarddetail_street
    cJSON *s_creditcarddetail_street = cJSON_GetObjectItemCaseSensitive(creditcarddetail_responseJSON, "sCreditcarddetailStreet");
    if (cJSON_IsNull(s_creditcarddetail_street)) {
        s_creditcarddetail_street = NULL;
    }
    if (!s_creditcarddetail_street) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcarddetail_street))
    {
    goto end; //String
    }

    // creditcarddetail_response->s_creditcarddetail_zip
    cJSON *s_creditcarddetail_zip = cJSON_GetObjectItemCaseSensitive(creditcarddetail_responseJSON, "sCreditcarddetailZip");
    if (cJSON_IsNull(s_creditcarddetail_zip)) {
        s_creditcarddetail_zip = NULL;
    }
    if (!s_creditcarddetail_zip) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcarddetail_zip))
    {
    goto end; //String
    }


    if (s_creditcarddetail_civic && !cJSON_IsNull(s_creditcarddetail_civic)) s_creditcarddetail_civic_local_str = strdup(s_creditcarddetail_civic->valuestring);
    if (s_creditcarddetail_street && !cJSON_IsNull(s_creditcarddetail_street)) s_creditcarddetail_street_local_str = strdup(s_creditcarddetail_street->valuestring);
    if (s_creditcarddetail_zip && !cJSON_IsNull(s_creditcarddetail_zip)) s_creditcarddetail_zip_local_str = strdup(s_creditcarddetail_zip->valuestring);

    creditcarddetail_response_local_var = creditcarddetail_response_create_internal (
        pki_creditcarddetail_id_local_var,
        fki_creditcardtype_id_local_var,
        i_creditcarddetail_lastdigits_local_var,
        i_creditcarddetail_expirationmonth_local_var,
        i_creditcarddetail_expirationyear_local_var,
        s_creditcarddetail_civic_local_str,
        s_creditcarddetail_street_local_str,
        s_creditcarddetail_zip_local_str
        );

    if (!creditcarddetail_response_local_var) {
        goto end;
    }

    return creditcarddetail_response_local_var;
end:
    if (pki_creditcarddetail_id_local_var) {
        free(pki_creditcarddetail_id_local_var);
        pki_creditcarddetail_id_local_var = NULL;
    }
    if (fki_creditcardtype_id_local_var) {
        free(fki_creditcardtype_id_local_var);
        fki_creditcardtype_id_local_var = NULL;
    }
    if (i_creditcarddetail_lastdigits_local_var) {
        free(i_creditcarddetail_lastdigits_local_var);
        i_creditcarddetail_lastdigits_local_var = NULL;
    }
    if (i_creditcarddetail_expirationmonth_local_var) {
        free(i_creditcarddetail_expirationmonth_local_var);
        i_creditcarddetail_expirationmonth_local_var = NULL;
    }
    if (i_creditcarddetail_expirationyear_local_var) {
        free(i_creditcarddetail_expirationyear_local_var);
        i_creditcarddetail_expirationyear_local_var = NULL;
    }
    if (s_creditcarddetail_civic_local_str) {
        free(s_creditcarddetail_civic_local_str);
        s_creditcarddetail_civic_local_str = NULL;
    }
    if (s_creditcarddetail_street_local_str) {
        free(s_creditcarddetail_street_local_str);
        s_creditcarddetail_street_local_str = NULL;
    }
    if (s_creditcarddetail_zip_local_str) {
        free(s_creditcarddetail_zip_local_str);
        s_creditcarddetail_zip_local_str = NULL;
    }
    return NULL;

}
