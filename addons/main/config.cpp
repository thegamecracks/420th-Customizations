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
    class B_LegStrapBag_base_F : Bag_Base {
        maximumLoad = 320; // 80
    };
    class B_AssaultPack_Base : Bag_Base {
        maximumLoad = 320; // 160
    };
    class B_FieldPack_Base : Bag_Base {
        maximumLoad = 320; // 200
    };
};

class CfgWeapons {
    class Uniform_Base;
    class UniformItem;
    class U_C_ArtTShirt_01_v1_F : Uniform_Base {
        class ItemInfo : UniformItem {
            containerClass = "Supply80"; // "Supply20"
        };
    };
    class U_C_ArtTShirt_01_v2_F : Uniform_Base {
        class ItemInfo : UniformItem {
            containerClass = "Supply80"; // "Supply20"
        };
    };
    class U_C_ArtTShirt_01_v3_F : Uniform_Base {
        class ItemInfo : UniformItem {
            containerClass = "Supply80"; // "Supply20"
        };
    };
    class U_C_ArtTShirt_01_v4_F : Uniform_Base {
        class ItemInfo : UniformItem {
            containerClass = "Supply80"; // "Supply20"
        };
    };
    class U_C_ArtTShirt_01_v5_F : Uniform_Base {
        class ItemInfo : UniformItem {
            containerClass = "Supply80"; // "Supply20"
        };
    };
    class U_C_ArtTShirt_01_v6_F : Uniform_Base {
        class ItemInfo : UniformItem {
            containerClass = "Supply80"; // "Supply20"
        };
    };
    class U_C_FormalSuit_01_black_F : Uniform_Base {
        class ItemInfo : UniformItem {
            containerClass = "Supply80"; // "Supply20"
        };
    };
    class U_C_FormalSuit_01_blue_F : Uniform_Base {
        class ItemInfo : UniformItem {
            containerClass = "Supply80"; // "Supply20"
        };
    };
    class U_C_FormalSuit_01_gray_F : Uniform_Base {
        class ItemInfo : UniformItem {
            containerClass = "Supply80"; // "Supply20"
        };
    };
    class U_C_FormalSuit_01_khaki_F : Uniform_Base {
        class ItemInfo : UniformItem {
            containerClass = "Supply80"; // "Supply20"
        };
    };
    class U_C_FormalSuit_01_tshirt_black_F : Uniform_Base {
        class ItemInfo : UniformItem {
            containerClass = "Supply80"; // "Supply20"
        };
    };
    class U_C_FormalSuit_01_tshirt_gray_F : Uniform_Base {
        class ItemInfo : UniformItem {
            containerClass = "Supply80"; // "Supply20"
        };
    };
    class U_C_Paramedic_01_F : Uniform_Base {
        class ItemInfo : UniformItem {
            containerClass = "Supply500"; // "Supply30"
        };
    };
    class Vest_Camo_Base;
    class VestItem;
    class V_LegStrapBag_base_F : Vest_Camo_Base {
        class ItemInfo : VestItem {
            containerClass = "Supply300"; // "Supply80"
        };
    };
};
