#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_ezmaxcustomer_company.h"



static multilingual_ezmaxcustomer_company_t *multilingual_ezmaxcustomer_company_create_internal(
    char *s_ezmaxcustomer_company1,
    char *s_ezmaxcustomer_company2
    ) {
    multilingual_ezmaxcustomer_company_t *multilingual_ezmaxcustomer_company_local_var = malloc(sizeof(multilingual_ezmaxcustomer_company_t));
    if (!multilingual_ezmaxcustomer_company_local_var) {
        return NULL;
    }
    memset(multilingual_ezmaxcustomer_company_local_var, 0, sizeof(multilingual_ezmaxcustomer_company_t));
    multilingual_ezmaxcustomer_company_local_var->_library_owned = 1;
    multilingual_ezmaxcustomer_company_local_var->s_ezmaxcustomer_company1 = s_ezmaxcustomer_company1;
    multilingual_ezmaxcustomer_company_local_var->s_ezmaxcustomer_company2 = s_ezmaxcustomer_company2;
    return multilingual_ezmaxcustomer_company_local_var;
}

__attribute__((deprecated)) multilingual_ezmaxcustomer_company_t *multilingual_ezmaxcustomer_company_create(
    char *s_ezmaxcustomer_company1,
    char *s_ezmaxcustomer_company2
    ) {
    multilingual_ezmaxcustomer_company_t *result = multilingual_ezmaxcustomer_company_create_internal (
        s_ezmaxcustomer_company1,
        s_ezmaxcustomer_company2
        );
    if (!result) {
    }
    return result;
}

void multilingual_ezmaxcustomer_company_free(multilingual_ezmaxcustomer_company_t *multilingual_ezmaxcustomer_company) {
    if(NULL == multilingual_ezmaxcustomer_company){
        return ;
    }
    if(multilingual_ezmaxcustomer_company->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_ezmaxcustomer_company_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_ezmaxcustomer_company->s_ezmaxcustomer_company1) {
        free(multilingual_ezmaxcustomer_company->s_ezmaxcustomer_company1);
        multilingual_ezmaxcustomer_company->s_ezmaxcustomer_company1 = NULL;
    }
    if (multilingual_ezmaxcustomer_company->s_ezmaxcustomer_company2) {
        free(multilingual_ezmaxcustomer_company->s_ezmaxcustomer_company2);
        multilingual_ezmaxcustomer_company->s_ezmaxcustomer_company2 = NULL;
    }
    free(multilingual_ezmaxcustomer_company);
}

cJSON *multilingual_ezmaxcustomer_company_convertToJSON(multilingual_ezmaxcustomer_company_t *multilingual_ezmaxcustomer_company) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_ezmaxcustomer_company->s_ezmaxcustomer_company1
    if(multilingual_ezmaxcustomer_company->s_ezmaxcustomer_company1) {
    if(cJSON_AddStringToObject(item, "sEzmaxcustomerCompany1", multilingual_ezmaxcustomer_company->s_ezmaxcustomer_company1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_ezmaxcustomer_company->s_ezmaxcustomer_company2
    if(multilingual_ezmaxcustomer_company->s_ezmaxcustomer_company2) {
    if(cJSON_AddStringToObject(item, "sEzmaxcustomerCompany2", multilingual_ezmaxcustomer_company->s_ezmaxcustomer_company2) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

multilingual_ezmaxcustomer_company_t *multilingual_ezmaxcustomer_company_parseFromJSON(cJSON *multilingual_ezmaxcustomer_companyJSON){

    multilingual_ezmaxcustomer_company_t *multilingual_ezmaxcustomer_company_local_var = NULL;

    char *s_ezmaxcustomer_company1_local_str = NULL;

    char *s_ezmaxcustomer_company2_local_str = NULL;

    // multilingual_ezmaxcustomer_company->s_ezmaxcustomer_company1
    cJSON *s_ezmaxcustomer_company1 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxcustomer_companyJSON, "sEzmaxcustomerCompany1");
    if (cJSON_IsNull(s_ezmaxcustomer_company1)) {
        s_ezmaxcustomer_company1 = NULL;
    }
    if (s_ezmaxcustomer_company1) { 
    if(!cJSON_IsString(s_ezmaxcustomer_company1) && !cJSON_IsNull(s_ezmaxcustomer_company1))
    {
    goto end; //String
    }
    }

    // multilingual_ezmaxcustomer_company->s_ezmaxcustomer_company2
    cJSON *s_ezmaxcustomer_company2 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxcustomer_companyJSON, "sEzmaxcustomerCompany2");
    if (cJSON_IsNull(s_ezmaxcustomer_company2)) {
        s_ezmaxcustomer_company2 = NULL;
    }
    if (s_ezmaxcustomer_company2) { 
    if(!cJSON_IsString(s_ezmaxcustomer_company2) && !cJSON_IsNull(s_ezmaxcustomer_company2))
    {
    goto end; //String
    }
    }


    if (s_ezmaxcustomer_company1 && !cJSON_IsNull(s_ezmaxcustomer_company1)) s_ezmaxcustomer_company1_local_str = strdup(s_ezmaxcustomer_company1->valuestring);
    if (s_ezmaxcustomer_company2 && !cJSON_IsNull(s_ezmaxcustomer_company2)) s_ezmaxcustomer_company2_local_str = strdup(s_ezmaxcustomer_company2->valuestring);

    multilingual_ezmaxcustomer_company_local_var = multilingual_ezmaxcustomer_company_create_internal (
        s_ezmaxcustomer_company1_local_str,
        s_ezmaxcustomer_company2_local_str
        );

    if (!multilingual_ezmaxcustomer_company_local_var) {
        goto end;
    }

    return multilingual_ezmaxcustomer_company_local_var;
end:
    if (s_ezmaxcustomer_company1_local_str) {
        free(s_ezmaxcustomer_company1_local_str);
        s_ezmaxcustomer_company1_local_str = NULL;
    }
    if (s_ezmaxcustomer_company2_local_str) {
        free(s_ezmaxcustomer_company2_local_str);
        s_ezmaxcustomer_company2_local_str = NULL;
    }
    return NULL;

}
