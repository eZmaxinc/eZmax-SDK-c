#ifndef ezsignsignature_edit_object_v1_request_TEST
#define ezsignsignature_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_edit_object_v1_request.h"
ezsignsignature_edit_object_v1_request_t* instantiate_ezsignsignature_edit_object_v1_request(int include_optional);

#include "test_ezsignsignature_request.c"


ezsignsignature_edit_object_v1_request_t* instantiate_ezsignsignature_edit_object_v1_request(int include_optional) {
  ezsignsignature_edit_object_v1_request_t* ezsignsignature_edit_object_v1_request = NULL;
  if (include_optional) {
    ezsignsignature_edit_object_v1_request = ezsignsignature_edit_object_v1_request_create(
      {"fkiEzsigndocumentID":48,"fkiEzsignfoldersignerassociationID":77,"iEzsignpagePagenumber":3,"iEzsignsignatureX":200,"iEzsignsignatureY":300,"iEzsignsignatureStep":1,"eEzsignsignatureType":"Name"}
    );
  } else {
    ezsignsignature_edit_object_v1_request = ezsignsignature_edit_object_v1_request_create(
      {"fkiEzsigndocumentID":48,"fkiEzsignfoldersignerassociationID":77,"iEzsignpagePagenumber":3,"iEzsignsignatureX":200,"iEzsignsignatureY":300,"iEzsignsignatureStep":1,"eEzsignsignatureType":"Name"}
    );
  }

  return ezsignsignature_edit_object_v1_request;
}


#ifdef ezsignsignature_edit_object_v1_request_MAIN

void test_ezsignsignature_edit_object_v1_request(int include_optional) {
    ezsignsignature_edit_object_v1_request_t* ezsignsignature_edit_object_v1_request_1 = instantiate_ezsignsignature_edit_object_v1_request(include_optional);

	cJSON* jsonezsignsignature_edit_object_v1_request_1 = ezsignsignature_edit_object_v1_request_convertToJSON(ezsignsignature_edit_object_v1_request_1);
	printf("ezsignsignature_edit_object_v1_request :\n%s\n", cJSON_Print(jsonezsignsignature_edit_object_v1_request_1));
	ezsignsignature_edit_object_v1_request_t* ezsignsignature_edit_object_v1_request_2 = ezsignsignature_edit_object_v1_request_parseFromJSON(jsonezsignsignature_edit_object_v1_request_1);
	cJSON* jsonezsignsignature_edit_object_v1_request_2 = ezsignsignature_edit_object_v1_request_convertToJSON(ezsignsignature_edit_object_v1_request_2);
	printf("repeating ezsignsignature_edit_object_v1_request:\n%s\n", cJSON_Print(jsonezsignsignature_edit_object_v1_request_2));
}

int main() {
  test_ezsignsignature_edit_object_v1_request(1);
  test_ezsignsignature_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_edit_object_v1_request_MAIN
#endif // ezsignsignature_edit_object_v1_request_TEST
