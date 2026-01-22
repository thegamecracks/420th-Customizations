class CfgPatches {
    class fdelta_main {
        name = "420th Customizations";
        author = "thegamecracks";
        url = "https://github.com/thegamecracks/420th-Customizations";

        requiredVersion = 2.20;
        requiredAddons[] = {
            "A3_Data_F_AoW_Loadorder",
            "A3_Data_F_Orange_Loadorder",
        };
        skipWhenMissingDependencies = 0;

        units[] = {};
    };
};

class CfgVehicles {
    class Bag_Base;
    // B_CivilianBackpack_01_Sport_Red_F
    class B_CivilianBackpack_01_Base_F : Bag_Base {
        maximumLoad = 320; // 240
    };
    class B_Messenger_Base_F : Bag_Base {
        maximumLoad = 320; // 140
    };
};

class CfgWeapons {
    class Uniform_Base;
    class UniformItem;
    class U_C_Paramedic_01_F : Uniform_Base {
        class ItemInfo : UniformItem {
            containerClass = "Supply500"; // "Supply30"
        };
    };
};
