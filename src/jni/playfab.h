
#pragma once
#include <fake-jni/fake-jni.h>

class AndroidJniHelperMultiplayer : public FakeJni::JObject {
public:
    DEFINE_CLASS_NAME("com/microsoft/playfab/utilities/multiplayer/AndroidJniHelperMultiplayer");

    static std::shared_ptr<FakeJni::JString> createUUID();
};