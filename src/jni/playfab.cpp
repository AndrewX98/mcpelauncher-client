#include "uuid.h"
#include "playfab.h"

std::shared_ptr<FakeJni::JString> AndroidJniHelperMultiplayer::createUUID() {
    return UUID::makeRandomUUID(false)->toString();
}