#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_ezmaxcustomeruser_note.h"



static multilingual_ezmaxcustomeruser_note_t *multilingual_ezmaxcustomeruser_note_create_internal(
    char *t_ezmaxcustomeruser_note1,
    char *t_ezmaxcustomeruser_note2
    ) {
    multilingual_ezmaxcustomeruser_note_t *multilingual_ezmaxcustomeruser_note_local_var = malloc(sizeof(multilingual_ezmaxcustomeruser_note_t));
    if (!multilingual_ezmaxcustomeruser_note_local_var) {
        return NULL;
    }
    memset(multilingual_ezmaxcustomeruser_note_local_var, 0, sizeof(multilingual_ezmaxcustomeruser_note_t));
    multilingual_ezmaxcustomeruser_note_local_var->_library_owned = 1;
    multilingual_ezmaxcustomeruser_note_local_var->t_ezmaxcustomeruser_note1 = t_ezmaxcustomeruser_note1;
    multilingual_ezmaxcustomeruser_note_local_var->t_ezmaxcustomeruser_note2 = t_ezmaxcustomeruser_note2;
    return multilingual_ezmaxcustomeruser_note_local_var;
}

__attribute__((deprecated)) multilingual_ezmaxcustomeruser_note_t *multilingual_ezmaxcustomeruser_note_create(
    char *t_ezmaxcustomeruser_note1,
    char *t_ezmaxcustomeruser_note2
    ) {
    multilingual_ezmaxcustomeruser_note_t *result = multilingual_ezmaxcustomeruser_note_create_internal (
        t_ezmaxcustomeruser_note1,
        t_ezmaxcustomeruser_note2
        );
    if (!result) {
    }
    return result;
}

void multilingual_ezmaxcustomeruser_note_free(multilingual_ezmaxcustomeruser_note_t *multilingual_ezmaxcustomeruser_note) {
    if(NULL == multilingual_ezmaxcustomeruser_note){
        return ;
    }
    if(multilingual_ezmaxcustomeruser_note->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_ezmaxcustomeruser_note_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_ezmaxcustomeruser_note->t_ezmaxcustomeruser_note1) {
        free(multilingual_ezmaxcustomeruser_note->t_ezmaxcustomeruser_note1);
        multilingual_ezmaxcustomeruser_note->t_ezmaxcustomeruser_note1 = NULL;
    }
    if (multilingual_ezmaxcustomeruser_note->t_ezmaxcustomeruser_note2) {
        free(multilingual_ezmaxcustomeruser_note->t_ezmaxcustomeruser_note2);
        multilingual_ezmaxcustomeruser_note->t_ezmaxcustomeruser_note2 = NULL;
    }
    free(multilingual_ezmaxcustomeruser_note);
}

cJSON *multilingual_ezmaxcustomeruser_note_convertToJSON(multilingual_ezmaxcustomeruser_note_t *multilingual_ezmaxcustomeruser_note) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_ezmaxcustomeruser_note->t_ezmaxcustomeruser_note1
    if(multilingual_ezmaxcustomeruser_note->t_ezmaxcustomeruser_note1) {
    if(cJSON_AddStringToObject(item, "tEzmaxcustomeruserNote1", multilingual_ezmaxcustomeruser_note->t_ezmaxcustomeruser_note1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_ezmaxcustomeruser_note->t_ezmaxcustomeruser_note2
    if(multilingual_ezmaxcustomeruser_note->t_ezmaxcustomeruser_note2) {
    if(cJSON_AddStringToObject(item, "tEzmaxcustomeruserNote2", multilingual_ezmaxcustomeruser_note->t_ezmaxcustomeruser_note2) == NULL) {
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

multilingual_ezmaxcustomeruser_note_t *multilingual_ezmaxcustomeruser_note_parseFromJSON(cJSON *multilingual_ezmaxcustomeruser_noteJSON){

    multilingual_ezmaxcustomeruser_note_t *multilingual_ezmaxcustomeruser_note_local_var = NULL;

    char *t_ezmaxcustomeruser_note1_local_str = NULL;

    char *t_ezmaxcustomeruser_note2_local_str = NULL;

    // multilingual_ezmaxcustomeruser_note->t_ezmaxcustomeruser_note1
    cJSON *t_ezmaxcustomeruser_note1 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxcustomeruser_noteJSON, "tEzmaxcustomeruserNote1");
    if (cJSON_IsNull(t_ezmaxcustomeruser_note1)) {
        t_ezmaxcustomeruser_note1 = NULL;
    }
    if (t_ezmaxcustomeruser_note1) { 
    if(!cJSON_IsString(t_ezmaxcustomeruser_note1) && !cJSON_IsNull(t_ezmaxcustomeruser_note1))
    {
    goto end; //String
    }
    }

    // multilingual_ezmaxcustomeruser_note->t_ezmaxcustomeruser_note2
    cJSON *t_ezmaxcustomeruser_note2 = cJSON_GetObjectItemCaseSensitive(multilingual_ezmaxcustomeruser_noteJSON, "tEzmaxcustomeruserNote2");
    if (cJSON_IsNull(t_ezmaxcustomeruser_note2)) {
        t_ezmaxcustomeruser_note2 = NULL;
    }
    if (t_ezmaxcustomeruser_note2) { 
    if(!cJSON_IsString(t_ezmaxcustomeruser_note2) && !cJSON_IsNull(t_ezmaxcustomeruser_note2))
    {
    goto end; //String
    }
    }


    if (t_ezmaxcustomeruser_note1 && !cJSON_IsNull(t_ezmaxcustomeruser_note1)) t_ezmaxcustomeruser_note1_local_str = strdup(t_ezmaxcustomeruser_note1->valuestring);
    if (t_ezmaxcustomeruser_note2 && !cJSON_IsNull(t_ezmaxcustomeruser_note2)) t_ezmaxcustomeruser_note2_local_str = strdup(t_ezmaxcustomeruser_note2->valuestring);

    multilingual_ezmaxcustomeruser_note_local_var = multilingual_ezmaxcustomeruser_note_create_internal (
        t_ezmaxcustomeruser_note1_local_str,
        t_ezmaxcustomeruser_note2_local_str
        );

    if (!multilingual_ezmaxcustomeruser_note_local_var) {
        goto end;
    }

    return multilingual_ezmaxcustomeruser_note_local_var;
end:
    if (t_ezmaxcustomeruser_note1_local_str) {
        free(t_ezmaxcustomeruser_note1_local_str);
        t_ezmaxcustomeruser_note1_local_str = NULL;
    }
    if (t_ezmaxcustomeruser_note2_local_str) {
        free(t_ezmaxcustomeruser_note2_local_str);
        t_ezmaxcustomeruser_note2_local_str = NULL;
    }
    return NULL;

}
