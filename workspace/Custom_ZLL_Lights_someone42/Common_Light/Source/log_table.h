/* log_table.h
 *
 * Log tables for quick gamma computation.
 * This file was generated by generate_log_table.py.
 */

#include <stdint.h>

static const uint16_t log_table_long[4096] = {
0, 34069, 31229, 29569, 28390, 27476, 26730, 26098, 25551, 25069, 24637, 24247, 23890, 23563, 23259, 22976,
22712, 22464, 22230, 22008, 21798, 21598, 21408, 21226, 21051, 20884, 20723, 20569, 20420, 20276, 20137, 20003,
19873, 19747, 19625, 19506, 19390, 19278, 19169, 19063, 18959, 18858, 18759, 18663, 18569, 18476, 18386, 18298,
18212, 18128, 18045, 17964, 17884, 17806, 17730, 17655, 17581, 17508, 17437, 17367, 17298, 17230, 17164, 17098,
17034, 16970, 16908, 16846, 16785, 16726, 16667, 16609, 16551, 16495, 16439, 16384, 16330, 16276, 16223, 16171,
16120, 16069, 16019, 15969, 15920, 15871, 15824, 15776, 15729, 15683, 15637, 15592, 15547, 15503, 15459, 15416,
15373, 15331, 15289, 15247, 15206, 15165, 15125, 15085, 15045, 15006, 14967, 14929, 14891, 14853, 14815, 14778,
14742, 14705, 14669, 14633, 14598, 14563, 14528, 14493, 14459, 14425, 14391, 14358, 14325, 14292, 14259, 14227,
14195, 14163, 14131, 14100, 14069, 14038, 14007, 13977, 13946, 13916, 13887, 13857, 13828, 13798, 13770, 13741,
13712, 13684, 13656, 13628, 13600, 13572, 13545, 13518, 13491, 13464, 13437, 13411, 13384, 13358, 13332, 13306,
13281, 13255, 13230, 13205, 13180, 13155, 13130, 13105, 13081, 13057, 13032, 13008, 12984, 12961, 12937, 12914,
12890, 12867, 12844, 12821, 12798, 12776, 12753, 12731, 12708, 12686, 12664, 12642, 12620, 12598, 12577, 12555,
12534, 12513, 12491, 12470, 12449, 12429, 12408, 12387, 12367, 12346, 12326, 12306, 12286, 12266, 12246, 12226,
12206, 12186, 12167, 12147, 12128, 12109, 12090, 12070, 12051, 12033, 12014, 11995, 11976, 11958, 11939, 11921,
11902, 11884, 11866, 11848, 11830, 11812, 11794, 11776, 11759, 11741, 11724, 11706, 11689, 11671, 11654, 11637,
11620, 11603, 11586, 11569, 11552, 11535, 11519, 11502, 11486, 11469, 11453, 11436, 11420, 11404, 11388, 11372,
11356, 11340, 11324, 11308, 11292, 11276, 11261, 11245, 11229, 11214, 11199, 11183, 11168, 11153, 11137, 11122,
11107, 11092, 11077, 11062, 11047, 11033, 11018, 11003, 10988, 10974, 10959, 10945, 10930, 10916, 10902, 10887,
10873, 10859, 10845, 10831, 10817, 10803, 10789, 10775, 10761, 10747, 10733, 10720, 10706, 10692, 10679, 10665,
10652, 10638, 10625, 10611, 10598, 10585, 10572, 10558, 10545, 10532, 10519, 10506, 10493, 10480, 10467, 10454,
10442, 10429, 10416, 10403, 10391, 10378, 10365, 10353, 10340, 10328, 10315, 10303, 10291, 10278, 10266, 10254,
10242, 10230, 10217, 10205, 10193, 10181, 10169, 10157, 10145, 10133, 10122, 10110, 10098, 10086, 10074, 10063,
10051, 10040, 10028, 10016, 10005, 9993, 9982, 9970, 9959, 9948, 9936, 9925, 9914, 9903, 9891, 9880,
9869, 9858, 9847, 9836, 9825, 9814, 9803, 9792, 9781, 9770, 9759, 9748, 9738, 9727, 9716, 9705,
9695, 9684, 9673, 9663, 9652, 9642, 9631, 9621, 9610, 9600, 9589, 9579, 9569, 9558, 9548, 9538,
9528, 9517, 9507, 9497, 9487, 9477, 9467, 9456, 9446, 9436, 9426, 9416, 9406, 9397, 9387, 9377,
9367, 9357, 9347, 9337, 9328, 9318, 9308, 9299, 9289, 9279, 9270, 9260, 9250, 9241, 9231, 9222,
9212, 9203, 9193, 9184, 9175, 9165, 9156, 9146, 9137, 9128, 9119, 9109, 9100, 9091, 9082, 9072,
9063, 9054, 9045, 9036, 9027, 9018, 9009, 9000, 8991, 8982, 8973, 8964, 8955, 8946, 8937, 8928,
8920, 8911, 8902, 8893, 8884, 8876, 8867, 8858, 8850, 8841, 8832, 8824, 8815, 8806, 8798, 8789,
8781, 8772, 8764, 8755, 8747, 8738, 8730, 8721, 8713, 8705, 8696, 8688, 8680, 8671, 8663, 8655,
8646, 8638, 8630, 8622, 8614, 8605, 8597, 8589, 8581, 8573, 8565, 8557, 8549, 8540, 8532, 8524,
8516, 8508, 8500, 8492, 8485, 8477, 8469, 8461, 8453, 8445, 8437, 8429, 8422, 8414, 8406, 8398,
8390, 8383, 8375, 8367, 8359, 8352, 8344, 8336, 8329, 8321, 8314, 8306, 8298, 8291, 8283, 8276,
8268, 8261, 8253, 8246, 8238, 8231, 8223, 8216, 8208, 8201, 8193, 8186, 8179, 8171, 8164, 8157,
8149, 8142, 8135, 8127, 8120, 8113, 8106, 8098, 8091, 8084, 8077, 8070, 8062, 8055, 8048, 8041,
8034, 8027, 8020, 8013, 8006, 7999, 7992, 7984, 7977, 7970, 7963, 7956, 7949, 7943, 7936, 7929,
7922, 7915, 7908, 7901, 7894, 7887, 7880, 7874, 7867, 7860, 7853, 7846, 7840, 7833, 7826, 7819,
7812, 7806, 7799, 7792, 7786, 7779, 7772, 7766, 7759, 7752, 7746, 7739, 7732, 7726, 7719, 7713,
7706, 7700, 7693, 7686, 7680, 7673, 7667, 7660, 7654, 7647, 7641, 7635, 7628, 7622, 7615, 7609,
7602, 7596, 7590, 7583, 7577, 7571, 7564, 7558, 7552, 7545, 7539, 7533, 7526, 7520, 7514, 7508,
7501, 7495, 7489, 7483, 7476, 7470, 7464, 7458, 7452, 7445, 7439, 7433, 7427, 7421, 7415, 7409,
7403, 7396, 7390, 7384, 7378, 7372, 7366, 7360, 7354, 7348, 7342, 7336, 7330, 7324, 7318, 7312,
7306, 7300, 7294, 7288, 7282, 7277, 7271, 7265, 7259, 7253, 7247, 7241, 7235, 7229, 7224, 7218,
7212, 7206, 7200, 7195, 7189, 7183, 7177, 7171, 7166, 7160, 7154, 7149, 7143, 7137, 7131, 7126,
7120, 7114, 7109, 7103, 7097, 7092, 7086, 7080, 7075, 7069, 7063, 7058, 7052, 7047, 7041, 7036,
7030, 7024, 7019, 7013, 7008, 7002, 6997, 6991, 6986, 6980, 6975, 6969, 6964, 6958, 6953, 6947,
6942, 6936, 6931, 6926, 6920, 6915, 6909, 6904, 6898, 6893, 6888, 6882, 6877, 6872, 6866, 6861,
6856, 6850, 6845, 6840, 6834, 6829, 6824, 6818, 6813, 6808, 6803, 6797, 6792, 6787, 6782, 6776,
6771, 6766, 6761, 6756, 6750, 6745, 6740, 6735, 6730, 6724, 6719, 6714, 6709, 6704, 6699, 6694,
6688, 6683, 6678, 6673, 6668, 6663, 6658, 6653, 6648, 6643, 6638, 6632, 6627, 6622, 6617, 6612,
6607, 6602, 6597, 6592, 6587, 6582, 6577, 6572, 6567, 6562, 6557, 6552, 6547, 6543, 6538, 6533,
6528, 6523, 6518, 6513, 6508, 6503, 6498, 6493, 6489, 6484, 6479, 6474, 6469, 6464, 6459, 6455,
6450, 6445, 6440, 6435, 6430, 6426, 6421, 6416, 6411, 6406, 6402, 6397, 6392, 6387, 6383, 6378,
6373, 6368, 6364, 6359, 6354, 6350, 6345, 6340, 6335, 6331, 6326, 6321, 6317, 6312, 6307, 6303,
6298, 6293, 6289, 6284, 6279, 6275, 6270, 6266, 6261, 6256, 6252, 6247, 6243, 6238, 6233, 6229,
6224, 6220, 6215, 6211, 6206, 6201, 6197, 6192, 6188, 6183, 6179, 6174, 6170, 6165, 6161, 6156,
6152, 6147, 6143, 6138, 6134, 6129, 6125, 6120, 6116, 6111, 6107, 6103, 6098, 6094, 6089, 6085,
6080, 6076, 6072, 6067, 6063, 6058, 6054, 6050, 6045, 6041, 6037, 6032, 6028, 6023, 6019, 6015,
6010, 6006, 6002, 5997, 5993, 5989, 5985, 5980, 5976, 5972, 5967, 5963, 5959, 5954, 5950, 5946,
5942, 5937, 5933, 5929, 5925, 5920, 5916, 5912, 5908, 5903, 5899, 5895, 5891, 5887, 5882, 5878,
5874, 5870, 5866, 5861, 5857, 5853, 5849, 5845, 5840, 5836, 5832, 5828, 5824, 5820, 5816, 5811,
5807, 5803, 5799, 5795, 5791, 5787, 5783, 5779, 5774, 5770, 5766, 5762, 5758, 5754, 5750, 5746,
5742, 5738, 5734, 5730, 5726, 5721, 5717, 5713, 5709, 5705, 5701, 5697, 5693, 5689, 5685, 5681,
5677, 5673, 5669, 5665, 5661, 5657, 5653, 5649, 5645, 5641, 5637, 5633, 5630, 5626, 5622, 5618,
5614, 5610, 5606, 5602, 5598, 5594, 5590, 5586, 5582, 5578, 5575, 5571, 5567, 5563, 5559, 5555,
5551, 5547, 5543, 5540, 5536, 5532, 5528, 5524, 5520, 5516, 5513, 5509, 5505, 5501, 5497, 5493,
5490, 5486, 5482, 5478, 5474, 5471, 5467, 5463, 5459, 5455, 5452, 5448, 5444, 5440, 5436, 5433,
5429, 5425, 5421, 5418, 5414, 5410, 5406, 5403, 5399, 5395, 5391, 5388, 5384, 5380, 5377, 5373,
5369, 5365, 5362, 5358, 5354, 5351, 5347, 5343, 5340, 5336, 5332, 5329, 5325, 5321, 5318, 5314,
5310, 5307, 5303, 5299, 5296, 5292, 5288, 5285, 5281, 5277, 5274, 5270, 5267, 5263, 5259, 5256,
5252, 5249, 5245, 5241, 5238, 5234, 5231, 5227, 5223, 5220, 5216, 5213, 5209, 5206, 5202, 5198,
5195, 5191, 5188, 5184, 5181, 5177, 5174, 5170, 5166, 5163, 5159, 5156, 5152, 5149, 5145, 5142,
5138, 5135, 5131, 5128, 5124, 5121, 5117, 5114, 5110, 5107, 5103, 5100, 5096, 5093, 5090, 5086,
5083, 5079, 5076, 5072, 5069, 5065, 5062, 5058, 5055, 5052, 5048, 5045, 5041, 5038, 5034, 5031,
5028, 5024, 5021, 5017, 5014, 5011, 5007, 5004, 5000, 4997, 4994, 4990, 4987, 4983, 4980, 4977,
4973, 4970, 4967, 4963, 4960, 4957, 4953, 4950, 4947, 4943, 4940, 4936, 4933, 4930, 4926, 4923,
4920, 4916, 4913, 4910, 4907, 4903, 4900, 4897, 4893, 4890, 4887, 4883, 4880, 4877, 4874, 4870,
4867, 4864, 4860, 4857, 4854, 4851, 4847, 4844, 4841, 4838, 4834, 4831, 4828, 4825, 4821, 4818,
4815, 4812, 4808, 4805, 4802, 4799, 4795, 4792, 4789, 4786, 4783, 4779, 4776, 4773, 4770, 4766,
4763, 4760, 4757, 4754, 4750, 4747, 4744, 4741, 4738, 4735, 4731, 4728, 4725, 4722, 4719, 4716,
4712, 4709, 4706, 4703, 4700, 4697, 4693, 4690, 4687, 4684, 4681, 4678, 4675, 4672, 4668, 4665,
4662, 4659, 4656, 4653, 4650, 4647, 4643, 4640, 4637, 4634, 4631, 4628, 4625, 4622, 4619, 4616,
4612, 4609, 4606, 4603, 4600, 4597, 4594, 4591, 4588, 4585, 4582, 4579, 4576, 4573, 4570, 4566,
4563, 4560, 4557, 4554, 4551, 4548, 4545, 4542, 4539, 4536, 4533, 4530, 4527, 4524, 4521, 4518,
4515, 4512, 4509, 4506, 4503, 4500, 4497, 4494, 4491, 4488, 4485, 4482, 4479, 4476, 4473, 4470,
4467, 4464, 4461, 4458, 4455, 4452, 4449, 4446, 4443, 4440, 4437, 4434, 4431, 4429, 4426, 4423,
4420, 4417, 4414, 4411, 4408, 4405, 4402, 4399, 4396, 4393, 4390, 4387, 4385, 4382, 4379, 4376,
4373, 4370, 4367, 4364, 4361, 4358, 4355, 4353, 4350, 4347, 4344, 4341, 4338, 4335, 4332, 4329,
4327, 4324, 4321, 4318, 4315, 4312, 4309, 4307, 4304, 4301, 4298, 4295, 4292, 4289, 4287, 4284,
4281, 4278, 4275, 4272, 4269, 4267, 4264, 4261, 4258, 4255, 4252, 4250, 4247, 4244, 4241, 4238,
4236, 4233, 4230, 4227, 4224, 4222, 4219, 4216, 4213, 4210, 4208, 4205, 4202, 4199, 4196, 4194,
4191, 4188, 4185, 4182, 4180, 4177, 4174, 4171, 4169, 4166, 4163, 4160, 4158, 4155, 4152, 4149,
4147, 4144, 4141, 4138, 4136, 4133, 4130, 4127, 4125, 4122, 4119, 4116, 4114, 4111, 4108, 4105,
4103, 4100, 4097, 4095, 4092, 4089, 4086, 4084, 4081, 4078, 4076, 4073, 4070, 4067, 4065, 4062,
4059, 4057, 4054, 4051, 4049, 4046, 4043, 4041, 4038, 4035, 4033, 4030, 4027, 4024, 4022, 4019,
4016, 4014, 4011, 4008, 4006, 4003, 4001, 3998, 3995, 3993, 3990, 3987, 3985, 3982, 3979, 3977,
3974, 3971, 3969, 3966, 3963, 3961, 3958, 3956, 3953, 3950, 3948, 3945, 3942, 3940, 3937, 3935,
3932, 3929, 3927, 3924, 3922, 3919, 3916, 3914, 3911, 3909, 3906, 3903, 3901, 3898, 3896, 3893,
3890, 3888, 3885, 3883, 3880, 3878, 3875, 3872, 3870, 3867, 3865, 3862, 3860, 3857, 3854, 3852,
3849, 3847, 3844, 3842, 3839, 3836, 3834, 3831, 3829, 3826, 3824, 3821, 3819, 3816, 3814, 3811,
3809, 3806, 3803, 3801, 3798, 3796, 3793, 3791, 3788, 3786, 3783, 3781, 3778, 3776, 3773, 3771,
3768, 3766, 3763, 3761, 3758, 3756, 3753, 3751, 3748, 3746, 3743, 3741, 3738, 3736, 3733, 3731,
3728, 3726, 3723, 3721, 3718, 3716, 3713, 3711, 3708, 3706, 3703, 3701, 3698, 3696, 3694, 3691,
3689, 3686, 3684, 3681, 3679, 3676, 3674, 3671, 3669, 3667, 3664, 3662, 3659, 3657, 3654, 3652,
3649, 3647, 3645, 3642, 3640, 3637, 3635, 3632, 3630, 3628, 3625, 3623, 3620, 3618, 3615, 3613,
3611, 3608, 3606, 3603, 3601, 3599, 3596, 3594, 3591, 3589, 3587, 3584, 3582, 3579, 3577, 3575,
3572, 3570, 3567, 3565, 3563, 3560, 3558, 3555, 3553, 3551, 3548, 3546, 3544, 3541, 3539, 3536,
3534, 3532, 3529, 3527, 3525, 3522, 3520, 3517, 3515, 3513, 3510, 3508, 3506, 3503, 3501, 3499,
3496, 3494, 3492, 3489, 3487, 3485, 3482, 3480, 3478, 3475, 3473, 3471, 3468, 3466, 3464, 3461,
3459, 3457, 3454, 3452, 3450, 3447, 3445, 3443, 3440, 3438, 3436, 3433, 3431, 3429, 3426, 3424,
3422, 3420, 3417, 3415, 3413, 3410, 3408, 3406, 3403, 3401, 3399, 3397, 3394, 3392, 3390, 3387,
3385, 3383, 3381, 3378, 3376, 3374, 3371, 3369, 3367, 3365, 3362, 3360, 3358, 3355, 3353, 3351,
3349, 3346, 3344, 3342, 3340, 3337, 3335, 3333, 3331, 3328, 3326, 3324, 3322, 3319, 3317, 3315,
3313, 3310, 3308, 3306, 3304, 3301, 3299, 3297, 3295, 3292, 3290, 3288, 3286, 3283, 3281, 3279,
3277, 3275, 3272, 3270, 3268, 3266, 3263, 3261, 3259, 3257, 3255, 3252, 3250, 3248, 3246, 3244,
3241, 3239, 3237, 3235, 3233, 3230, 3228, 3226, 3224, 3222, 3219, 3217, 3215, 3213, 3211, 3208,
3206, 3204, 3202, 3200, 3197, 3195, 3193, 3191, 3189, 3187, 3184, 3182, 3180, 3178, 3176, 3173,
3171, 3169, 3167, 3165, 3163, 3160, 3158, 3156, 3154, 3152, 3150, 3148, 3145, 3143, 3141, 3139,
3137, 3135, 3132, 3130, 3128, 3126, 3124, 3122, 3120, 3117, 3115, 3113, 3111, 3109, 3107, 3105,
3102, 3100, 3098, 3096, 3094, 3092, 3090, 3088, 3085, 3083, 3081, 3079, 3077, 3075, 3073, 3071,
3068, 3066, 3064, 3062, 3060, 3058, 3056, 3054, 3052, 3049, 3047, 3045, 3043, 3041, 3039, 3037,
3035, 3033, 3031, 3028, 3026, 3024, 3022, 3020, 3018, 3016, 3014, 3012, 3010, 3008, 3006, 3003,
3001, 2999, 2997, 2995, 2993, 2991, 2989, 2987, 2985, 2983, 2981, 2979, 2976, 2974, 2972, 2970,
2968, 2966, 2964, 2962, 2960, 2958, 2956, 2954, 2952, 2950, 2948, 2946, 2943, 2941, 2939, 2937,
2935, 2933, 2931, 2929, 2927, 2925, 2923, 2921, 2919, 2917, 2915, 2913, 2911, 2909, 2907, 2905,
2903, 2901, 2899, 2897, 2895, 2892, 2890, 2888, 2886, 2884, 2882, 2880, 2878, 2876, 2874, 2872,
2870, 2868, 2866, 2864, 2862, 2860, 2858, 2856, 2854, 2852, 2850, 2848, 2846, 2844, 2842, 2840,
2838, 2836, 2834, 2832, 2830, 2828, 2826, 2824, 2822, 2820, 2818, 2816, 2814, 2812, 2810, 2808,
2806, 2804, 2802, 2800, 2798, 2796, 2794, 2792, 2790, 2788, 2786, 2784, 2783, 2781, 2779, 2777,
2775, 2773, 2771, 2769, 2767, 2765, 2763, 2761, 2759, 2757, 2755, 2753, 2751, 2749, 2747, 2745,
2743, 2741, 2739, 2737, 2735, 2733, 2732, 2730, 2728, 2726, 2724, 2722, 2720, 2718, 2716, 2714,
2712, 2710, 2708, 2706, 2704, 2702, 2700, 2699, 2697, 2695, 2693, 2691, 2689, 2687, 2685, 2683,
2681, 2679, 2677, 2675, 2673, 2672, 2670, 2668, 2666, 2664, 2662, 2660, 2658, 2656, 2654, 2652,
2650, 2649, 2647, 2645, 2643, 2641, 2639, 2637, 2635, 2633, 2631, 2630, 2628, 2626, 2624, 2622,
2620, 2618, 2616, 2614, 2612, 2611, 2609, 2607, 2605, 2603, 2601, 2599, 2597, 2595, 2594, 2592,
2590, 2588, 2586, 2584, 2582, 2580, 2579, 2577, 2575, 2573, 2571, 2569, 2567, 2565, 2564, 2562,
2560, 2558, 2556, 2554, 2552, 2550, 2549, 2547, 2545, 2543, 2541, 2539, 2537, 2536, 2534, 2532,
2530, 2528, 2526, 2524, 2523, 2521, 2519, 2517, 2515, 2513, 2512, 2510, 2508, 2506, 2504, 2502,
2500, 2499, 2497, 2495, 2493, 2491, 2489, 2488, 2486, 2484, 2482, 2480, 2478, 2477, 2475, 2473,
2471, 2469, 2467, 2466, 2464, 2462, 2460, 2458, 2456, 2455, 2453, 2451, 2449, 2447, 2446, 2444,
2442, 2440, 2438, 2436, 2435, 2433, 2431, 2429, 2427, 2426, 2424, 2422, 2420, 2418, 2417, 2415,
2413, 2411, 2409, 2408, 2406, 2404, 2402, 2400, 2399, 2397, 2395, 2393, 2391, 2390, 2388, 2386,
2384, 2382, 2381, 2379, 2377, 2375, 2374, 2372, 2370, 2368, 2366, 2365, 2363, 2361, 2359, 2357,
2356, 2354, 2352, 2350, 2349, 2347, 2345, 2343, 2341, 2340, 2338, 2336, 2334, 2333, 2331, 2329,
2327, 2326, 2324, 2322, 2320, 2319, 2317, 2315, 2313, 2311, 2310, 2308, 2306, 2304, 2303, 2301,
2299, 2297, 2296, 2294, 2292, 2290, 2289, 2287, 2285, 2283, 2282, 2280, 2278, 2276, 2275, 2273,
2271, 2269, 2268, 2266, 2264, 2263, 2261, 2259, 2257, 2256, 2254, 2252, 2250, 2249, 2247, 2245,
2243, 2242, 2240, 2238, 2237, 2235, 2233, 2231, 2230, 2228, 2226, 2224, 2223, 2221, 2219, 2218,
2216, 2214, 2212, 2211, 2209, 2207, 2206, 2204, 2202, 2200, 2199, 2197, 2195, 2194, 2192, 2190,
2188, 2187, 2185, 2183, 2182, 2180, 2178, 2177, 2175, 2173, 2171, 2170, 2168, 2166, 2165, 2163,
2161, 2160, 2158, 2156, 2154, 2153, 2151, 2149, 2148, 2146, 2144, 2143, 2141, 2139, 2138, 2136,
2134, 2133, 2131, 2129, 2128, 2126, 2124, 2122, 2121, 2119, 2117, 2116, 2114, 2112, 2111, 2109,
2107, 2106, 2104, 2102, 2101, 2099, 2097, 2096, 2094, 2092, 2091, 2089, 2087, 2086, 2084, 2082,
2081, 2079, 2077, 2076, 2074, 2072, 2071, 2069, 2067, 2066, 2064, 2062, 2061, 2059, 2057, 2056,
2054, 2053, 2051, 2049, 2048, 2046, 2044, 2043, 2041, 2039, 2038, 2036, 2034, 2033, 2031, 2029,
2028, 2026, 2025, 2023, 2021, 2020, 2018, 2016, 2015, 2013, 2011, 2010, 2008, 2007, 2005, 2003,
2002, 2000, 1998, 1997, 1995, 1994, 1992, 1990, 1989, 1987, 1985, 1984, 1982, 1981, 1979, 1977,
1976, 1974, 1972, 1971, 1969, 1968, 1966, 1964, 1963, 1961, 1959, 1958, 1956, 1955, 1953, 1951,
1950, 1948, 1947, 1945, 1943, 1942, 1940, 1939, 1937, 1935, 1934, 1932, 1931, 1929, 1927, 1926,
1924, 1923, 1921, 1919, 1918, 1916, 1915, 1913, 1911, 1910, 1908, 1907, 1905, 1903, 1902, 1900,
1899, 1897, 1895, 1894, 1892, 1891, 1889, 1887, 1886, 1884, 1883, 1881, 1880, 1878, 1876, 1875,
1873, 1872, 1870, 1869, 1867, 1865, 1864, 1862, 1861, 1859, 1857, 1856, 1854, 1853, 1851, 1850,
1848, 1846, 1845, 1843, 1842, 1840, 1839, 1837, 1836, 1834, 1832, 1831, 1829, 1828, 1826, 1825,
1823, 1821, 1820, 1818, 1817, 1815, 1814, 1812, 1811, 1809, 1807, 1806, 1804, 1803, 1801, 1800,
1798, 1797, 1795, 1793, 1792, 1790, 1789, 1787, 1786, 1784, 1783, 1781, 1780, 1778, 1776, 1775,
1773, 1772, 1770, 1769, 1767, 1766, 1764, 1763, 1761, 1759, 1758, 1756, 1755, 1753, 1752, 1750,
1749, 1747, 1746, 1744, 1743, 1741, 1740, 1738, 1736, 1735, 1733, 1732, 1730, 1729, 1727, 1726,
1724, 1723, 1721, 1720, 1718, 1717, 1715, 1714, 1712, 1711, 1709, 1708, 1706, 1705, 1703, 1701,
1700, 1698, 1697, 1695, 1694, 1692, 1691, 1689, 1688, 1686, 1685, 1683, 1682, 1680, 1679, 1677,
1676, 1674, 1673, 1671, 1670, 1668, 1667, 1665, 1664, 1662, 1661, 1659, 1658, 1656, 1655, 1653,
1652, 1650, 1649, 1647, 1646, 1644, 1643, 1641, 1640, 1638, 1637, 1635, 1634, 1632, 1631, 1629,
1628, 1626, 1625, 1623, 1622, 1620, 1619, 1618, 1616, 1615, 1613, 1612, 1610, 1609, 1607, 1606,
1604, 1603, 1601, 1600, 1598, 1597, 1595, 1594, 1592, 1591, 1589, 1588, 1586, 1585, 1583, 1582,
1581, 1579, 1578, 1576, 1575, 1573, 1572, 1570, 1569, 1567, 1566, 1564, 1563, 1561, 1560, 1559,
1557, 1556, 1554, 1553, 1551, 1550, 1548, 1547, 1545, 1544, 1542, 1541, 1540, 1538, 1537, 1535,
1534, 1532, 1531, 1529, 1528, 1526, 1525, 1524, 1522, 1521, 1519, 1518, 1516, 1515, 1513, 1512,
1511, 1509, 1508, 1506, 1505, 1503, 1502, 1500, 1499, 1498, 1496, 1495, 1493, 1492, 1490, 1489,
1487, 1486, 1485, 1483, 1482, 1480, 1479, 1477, 1476, 1475, 1473, 1472, 1470, 1469, 1467, 1466,
1465, 1463, 1462, 1460, 1459, 1457, 1456, 1455, 1453, 1452, 1450, 1449, 1447, 1446, 1445, 1443,
1442, 1440, 1439, 1437, 1436, 1435, 1433, 1432, 1430, 1429, 1427, 1426, 1425, 1423, 1422, 1420,
1419, 1418, 1416, 1415, 1413, 1412, 1411, 1409, 1408, 1406, 1405, 1403, 1402, 1401, 1399, 1398,
1396, 1395, 1394, 1392, 1391, 1389, 1388, 1387, 1385, 1384, 1382, 1381, 1380, 1378, 1377, 1375,
1374, 1373, 1371, 1370, 1368, 1367, 1366, 1364, 1363, 1361, 1360, 1359, 1357, 1356, 1354, 1353,
1352, 1350, 1349, 1347, 1346, 1345, 1343, 1342, 1341, 1339, 1338, 1336, 1335, 1334, 1332, 1331,
1329, 1328, 1327, 1325, 1324, 1323, 1321, 1320, 1318, 1317, 1316, 1314, 1313, 1312, 1310, 1309,
1307, 1306, 1305, 1303, 1302, 1301, 1299, 1298, 1296, 1295, 1294, 1292, 1291, 1290, 1288, 1287,
1285, 1284, 1283, 1281, 1280, 1279, 1277, 1276, 1274, 1273, 1272, 1270, 1269, 1268, 1266, 1265,
1264, 1262, 1261, 1259, 1258, 1257, 1255, 1254, 1253, 1251, 1250, 1249, 1247, 1246, 1245, 1243,
1242, 1240, 1239, 1238, 1236, 1235, 1234, 1232, 1231, 1230, 1228, 1227, 1226, 1224, 1223, 1222,
1220, 1219, 1218, 1216, 1215, 1214, 1212, 1211, 1209, 1208, 1207, 1205, 1204, 1203, 1201, 1200,
1199, 1197, 1196, 1195, 1193, 1192, 1191, 1189, 1188, 1187, 1185, 1184, 1183, 1181, 1180, 1179,
1177, 1176, 1175, 1173, 1172, 1171, 1169, 1168, 1167, 1165, 1164, 1163, 1161, 1160, 1159, 1157,
1156, 1155, 1153, 1152, 1151, 1149, 1148, 1147, 1145, 1144, 1143, 1142, 1140, 1139, 1138, 1136,
1135, 1134, 1132, 1131, 1130, 1128, 1127, 1126, 1124, 1123, 1122, 1120, 1119, 1118, 1116, 1115,
1114, 1113, 1111, 1110, 1109, 1107, 1106, 1105, 1103, 1102, 1101, 1099, 1098, 1097, 1096, 1094,
1093, 1092, 1090, 1089, 1088, 1086, 1085, 1084, 1082, 1081, 1080, 1079, 1077, 1076, 1075, 1073,
1072, 1071, 1069, 1068, 1067, 1066, 1064, 1063, 1062, 1060, 1059, 1058, 1056, 1055, 1054, 1053,
1051, 1050, 1049, 1047, 1046, 1045, 1044, 1042, 1041, 1040, 1038, 1037, 1036, 1035, 1033, 1032,
1031, 1029, 1028, 1027, 1026, 1024, 1023, 1022, 1020, 1019, 1018, 1017, 1015, 1014, 1013, 1011,
1010, 1009, 1008, 1006, 1005, 1004, 1002, 1001, 1000, 999, 997, 996, 995, 994, 992, 991,
990, 988, 987, 986, 985, 983, 982, 981, 980, 978, 977, 976, 974, 973, 972, 971,
969, 968, 967, 966, 964, 963, 962, 961, 959, 958, 957, 955, 954, 953, 952, 950,
949, 948, 947, 945, 944, 943, 942, 940, 939, 938, 937, 935, 934, 933, 932, 930,
929, 928, 927, 925, 924, 923, 922, 920, 919, 918, 916, 915, 914, 913, 911, 910,
909, 908, 907, 905, 904, 903, 902, 900, 899, 898, 897, 895, 894, 893, 892, 890,
889, 888, 887, 885, 884, 883, 882, 880, 879, 878, 877, 875, 874, 873, 872, 870,
869, 868, 867, 866, 864, 863, 862, 861, 859, 858, 857, 856, 854, 853, 852, 851,
849, 848, 847, 846, 845, 843, 842, 841, 840, 838, 837, 836, 835, 834, 832, 831,
830, 829, 827, 826, 825, 824, 823, 821, 820, 819, 818, 816, 815, 814, 813, 812,
810, 809, 808, 807, 805, 804, 803, 802, 801, 799, 798, 797, 796, 794, 793, 792,
791, 790, 788, 787, 786, 785, 784, 782, 781, 780, 779, 778, 776, 775, 774, 773,
771, 770, 769, 768, 767, 765, 764, 763, 762, 761, 759, 758, 757, 756, 755, 753,
752, 751, 750, 749, 747, 746, 745, 744, 743, 741, 740, 739, 738, 737, 735, 734,
733, 732, 731, 729, 728, 727, 726, 725, 723, 722, 721, 720, 719, 717, 716, 715,
714, 713, 712, 710, 709, 708, 707, 706, 704, 703, 702, 701, 700, 698, 697, 696,
695, 694, 693, 691, 690, 689, 688, 687, 685, 684, 683, 682, 681, 680, 678, 677,
676, 675, 674, 672, 671, 670, 669, 668, 667, 665, 664, 663, 662, 661, 660, 658,
657, 656, 655, 654, 652, 651, 650, 649, 648, 647, 645, 644, 643, 642, 641, 640,
638, 637, 636, 635, 634, 633, 631, 630, 629, 628, 627, 626, 624, 623, 622, 621,
620, 619, 617, 616, 615, 614, 613, 612, 610, 609, 608, 607, 606, 605, 603, 602,
601, 600, 599, 598, 597, 595, 594, 593, 592, 591, 590, 588, 587, 586, 585, 584,
583, 582, 580, 579, 578, 577, 576, 575, 573, 572, 571, 570, 569, 568, 567, 565,
564, 563, 562, 561, 560, 559, 557, 556, 555, 554, 553, 552, 551, 549, 548, 547,
546, 545, 544, 543, 541, 540, 539, 538, 537, 536, 535, 533, 532, 531, 530, 529,
528, 527, 525, 524, 523, 522, 521, 520, 519, 517, 516, 515, 514, 513, 512, 511,
510, 508, 507, 506, 505, 504, 503, 502, 500, 499, 498, 497, 496, 495, 494, 493,
491, 490, 489, 488, 487, 486, 485, 484, 482, 481, 480, 479, 478, 477, 476, 475,
473, 472, 471, 470, 469, 468, 467, 466, 464, 463, 462, 461, 460, 459, 458, 457,
456, 454, 453, 452, 451, 450, 449, 448, 447, 445, 444, 443, 442, 441, 440, 439,
438, 437, 435, 434, 433, 432, 431, 430, 429, 428, 427, 425, 424, 423, 422, 421,
420, 419, 418, 417, 415, 414, 413, 412, 411, 410, 409, 408, 407, 406, 404, 403,
402, 401, 400, 399, 398, 397, 396, 394, 393, 392, 391, 390, 389, 388, 387, 386,
385, 383, 382, 381, 380, 379, 378, 377, 376, 375, 374, 373, 371, 370, 369, 368,
367, 366, 365, 364, 363, 362, 360, 359, 358, 357, 356, 355, 354, 353, 352, 351,
350, 348, 347, 346, 345, 344, 343, 342, 341, 340, 339, 338, 337, 335, 334, 333,
332, 331, 330, 329, 328, 327, 326, 325, 324, 322, 321, 320, 319, 318, 317, 316,
315, 314, 313, 312, 311, 309, 308, 307, 306, 305, 304, 303, 302, 301, 300, 299,
298, 297, 295, 294, 293, 292, 291, 290, 289, 288, 287, 286, 285, 284, 283, 282,
280, 279, 278, 277, 276, 275, 274, 273, 272, 271, 270, 269, 268, 267, 265, 264,
263, 262, 261, 260, 259, 258, 257, 256, 255, 254, 253, 252, 251, 250, 248, 247,
246, 245, 244, 243, 242, 241, 240, 239, 238, 237, 236, 235, 234, 233, 231, 230,
229, 228, 227, 226, 225, 224, 223, 222, 221, 220, 219, 218, 217, 216, 215, 214,
212, 211, 210, 209, 208, 207, 206, 205, 204, 203, 202, 201, 200, 199, 198, 197,
196, 195, 194, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180,
179, 178, 177, 176, 175, 174, 173, 172, 171, 169, 168, 167, 166, 165, 164, 163,
162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 151, 150, 149, 148, 147,
146, 145, 144, 142, 141, 140, 139, 138, 137, 136, 135, 134, 133, 132, 131, 130,
129, 128, 127, 126, 125, 124, 123, 122, 121, 120, 119, 118, 117, 116, 115, 114,
113, 112, 111, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97,
96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81,
80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65,
64, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48,
47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32,
31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16,
15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
};

static const uint16_t log_table_short[255] = {
0, 22681, 19842, 18181, 17003, 16089, 15342, 14710, 14164, 13681, 13250, 12859, 12503, 12175, 11871, 11589,
11324, 11076, 10842, 10620, 10410, 10211, 10020, 9838, 9664, 9496, 9336, 9181, 9032, 8888, 8750, 8615,
8485, 8359, 8237, 8118, 8003, 7891, 7781, 7675, 7571, 7470, 7371, 7275, 7181, 7089, 6999, 6911,
6824, 6740, 6657, 6576, 6497, 6419, 6342, 6267, 6193, 6121, 6049, 5979, 5910, 5843, 5776, 5711,
5646, 5583, 5520, 5459, 5398, 5338, 5279, 5221, 5164, 5107, 5051, 4996, 4942, 4889, 4836, 4784,
4732, 4681, 4631, 4581, 4532, 4484, 4436, 4389, 4342, 4295, 4250, 4204, 4160, 4115, 4072, 4028,
3985, 3943, 3901, 3859, 3818, 3777, 3737, 3697, 3657, 3618, 3579, 3541, 3503, 3465, 3428, 3391,
3354, 3318, 3281, 3246, 3210, 3175, 3140, 3106, 3071, 3037, 3004, 2970, 2937, 2904, 2872, 2839,
2807, 2775, 2744, 2712, 2681, 2650, 2619, 2589, 2559, 2529, 2499, 2469, 2440, 2411, 2382, 2353,
2325, 2296, 2268, 2240, 2212, 2185, 2157, 2130, 2103, 2076, 2050, 2023, 1997, 1971, 1945, 1919,
1893, 1867, 1842, 1817, 1792, 1767, 1742, 1718, 1693, 1669, 1645, 1621, 1597, 1573, 1549, 1526,
1503, 1479, 1456, 1433, 1411, 1388, 1365, 1343, 1321, 1298, 1276, 1254, 1232, 1211, 1189, 1168,
1146, 1125, 1104, 1083, 1062, 1041, 1020, 1000, 979, 959, 938, 918, 898, 878, 858, 838,
818, 799, 779, 760, 740, 721, 702, 683, 664, 645, 626, 607, 589, 570, 552, 533,
515, 497, 478, 460, 442, 424, 407, 389, 371, 353, 336, 318, 301, 284, 267, 249,
232, 215, 198, 181, 165, 148, 131, 114, 98, 81, 65, 49, 32, 16, 0 };

