#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_ezmaxcustomer_note.h"



static multilingual_ezmaxcustomer_note_t *multilingual_ezmaxcustomer_note_create_internal(
    char *t_ezmaxcustomer_note1,
    char *t_ezmaxcustomer_note2
    ) {
    multilingual_ezmaxcustomer_note_t *multilingual_ezmaxcustomer_note_local_var = malloc(sizeof(multilingual_ezmaxcustomer_note_t));
    if (!multilingual_ezmaxcustomer_note_local_var) {
        return NULL;
    }
    memset(multilingual_ezmaxcustomer_note_local_var, 0, sizeof(multilingual_ezmaxcustomer_note_t));
    multilingual_ezmaxcustomer_note_local_var->_library_owned = 1;
    multilingual_ezmaxcustomer_note_local_var->t_ezmaxcustomer_note1 = t_ezmaxcustomer_note1;
    multilingual_ezmaxcustomer_note_local_var->t_ezmaxcustomer_note2 = t_ezmaxcustomer_note2;
    return multilingual_ezmaxcustomer_note_local_var;
}

__attribute__((deprecated)) multilingual_ezmaxcustomer_note_t *multilingual_ezmaxcustomer_note_create(
    char *t_ezmaxcustomer_note1,
    char *t_ezmaxcustomer_note2
    ) {
    multilingual_ezmaxcustomer_note_t *result = multilingual_ezmaxcustomer_note_create_internal (
        t_ezmaxcustomer_note1,
        t_ezmaxcustomer_note2
        );
    if (!result) {
    }
    return result;
}

void multilingual_ezmaxcustomer_note_free(multilingual_ezmaxcustomer_note_t *multilingual_ezmaxcustomer_note) {
    if(NULL == multilingual_ezmaxcustomer_note){
        return ;
    }
    if(multilingual_ezmaxcustomer_note->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_ezmaxcustomer_note_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_ezmaxcustomer_note->t_ezmaxcustomer_note1) {
        free(multilingual_ezmaxcustomer_note->t_ezmaxcustomer_note1);
        multilingual_ezmaxcustomer_note->t_ezmaxcustomer_note1 = NULL;
    }
    if (multilingual_ezmaxcustomer_note->t_ezmaxcustomer_note2) {
        free(multilingual_ezmaxcustomer_note->t_ezmaxcustomer_note2);
        multilingual_ezmaxcustomer_note->t_ezmaxcustomer_note2 = NULL;
    }
    free(multilingual_ezmaxcustomer_note);
}

cJSON *multilingual_ezmaxcustomer_note_convertToJSON(multilingual_ezmaxcustomer_note_t *multilingual_ezmaxcustomer_note) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_ezmaxcustomer_note->t_ezmaxcustomer_note1
    if(multilingual_ezmaxcustomer_note->t_ezmaxcustomer_note1) {
    if(cJSON_AddStringToObject(item, "tEzmaxcustomerNote1", multilingual_ezmaxcustomer_note->t_ezmaxcustomer_note1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_ezmaxcustomer_note->t_ezmaxcustomer_note2
    if(multilingual_ezmaxcustomer_note->t_ezmaxcustomer_note2) {
    if(cJSON_AddStringToObject(item, "tEzmaxcustomerNote2", multilingual_ezmaxcustomer_note->t_ezmaxcustomer_note2) == NULL) {
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

multilingual_ezmaxcustomer_note_t *multilingual_ezmaxcustomer_note_parseFromJSON(cJSON *multilingual_ezmaxcustomer_noteJSON){

    multilingual_ezmaxcustomer_note_t *multilingual_ezmaxcustomer_note_local_var = NULL;

    char *t_ezmaxcustomer_note1_local_str = NULL;

    char *t_ezmaxcustomer_note2_local_str = NULL;

    // multilingual_ezmaxcustomer_note->t_ezmaxcustomer_note1
    cJSON *t_ezmaxcustomer_note1 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxcustomer_noteJSON, "tEzmaxcustomerNote1");
    if (cJSON_IsNull(t_ezmaxcustomer_note1)) {
        t_ezmaxcustomer_note1 = NULL;
    }
    if (t_ezmaxcustomer_note1) { 
    if(!cJSON_IsString(t_ezmaxcustomer_note1) && !cJSON_IsNull(t_ezmaxcustomer_note1))
    {
    goto end; //String
    }
    }

    // multilingual_ezmaxcustomer_note->t_ezmaxcustomer_note2
    cJSON *t_ezmaxcustomer_note2 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxcustomer_noteJSON, "tEzmaxcustomerNote2");
    if (cJSON_IsNull(t_ezmaxcustomer_note2)) {
        t_ezmaxcustomer_note2 = NULL;
    }
    if (t_ezmaxcustomer_note2) { 
    if(!cJSON_IsString(t_ezmaxcustomer_note2) && !cJSON_IsNull(t_ezmaxcustomer_note2))
    {
    goto end; //String
    }
    }


    if (t_ezmaxcustomer_note1 && !cJSON_IsNull(t_ezmaxcustomer_note1)) t_ezmaxcustomer_note1_local_str = strdup(t_ezmaxcustomer_note1->valuestring);
    if (t_ezmaxcustomer_note2 && !cJSON_IsNull(t_ezmaxcustomer_note2)) t_ezmaxcustomer_note2_local_str = strdup(t_ezmaxcustomer_note2->valuestring);

    multilingual_ezmaxcustomer_note_local_var = multilingual_ezmaxcustomer_note_create_internal (
        t_ezmaxcustomer_note1_local_str,
        t_ezmaxcustomer_note2_local_str
        );

    if (!multilingual_ezmaxcustomer_note_local_var) {
        goto end;
    }

    return multilingual_ezmaxcustomer_note_local_var;
end:
    if (t_ezmaxcustomer_note1_local_str) {
        free(t_ezmaxcustomer_note1_local_str);
        t_ezmaxcustomer_note1_local_str = NULL;
    }
    if (t_ezmaxcustomer_note2_local_str) {
        free(t_ezmaxcustomer_note2_local_str);
        t_ezmaxcustomer_note2_local_str = NULL;
    }
    return NULL;

}
