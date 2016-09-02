// generated from file './/sfp.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace sfp {

template <int tab_size>
struct table1d_imp { // 1-dimensional clipping table
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
};

static table1d_imp<100> clip __rt_data = {
	0.005,0.795235013262,101.97,100, {
	0.00548195523036,0.016445865691,0.0274097761516,0.0383736866119,0.0493375970718,
	0.060301507531,0.0712654179894,0.0822293284464,0.0931932389016,0.104157149354,
	0.115121059803,0.126084970245,0.13704888068,0.148012791103,0.158976701508,
	0.169940611889,0.180904522235,0.19186843253,0.202832342751,0.213796252866,
	0.224760162828,0.23572407257,0.246687981995,0.257651890962,0.26861579927,
	0.279579706628,0.290543612617,0.301507516632,0.312471417804,0.323435314878,
	0.334399206045,0.3453630887,0.356326959087,0.367290811794,0.378254639021,
	0.389218429528,0.400182167115,0.411145828437,0.422109379849,0.433072772871,
	0.444035937638,0.454998773485,0.465961135365,0.476922814321,0.48788350936,
	0.498842787024,0.509800023297,0.520754320256,0.531704386732,0.542648367922,
	0.55358360312,0.564506283341,0.575410971703,0.586289940184,0.597132269761,
	0.607922663898,0.618639951041,0.629255322196,0.639730493837,0.650016225239,
	0.660051925492,0.669767316942,0.679086989359,0.687937882416,0.696258343947,
	0.704006183628,0.711163121782,0.717734492237,0.723745022743,0.72923269117,
	0.734242606851,0.738822090117,0.743017303269,0.74687127245,0.750422944114,
	0.7537069184,0.756753578753,0.759589425229,0.762237491115,0.764717773458,
	0.767047640962,0.769242202516,0.771314630963,0.773276442704,0.775137736666,
	0.776907397287,0.778593266396,0.780202288563,0.781740634041,0.783213802858,
	0.784626713121,0.785983776084,0.787288960129,0.788545845459,0.789757670968,
	0.790927374556,0.792057627879,0.793150866414,0.794209315546,0.795235013262
	}
};

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec3[2];
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fRec5[6];
	double 	fConst67;
	double 	fConst68;
	double 	fConst69;
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	double 	fConst73;
	double 	fConst74;
	double 	fConst75;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec6[2];
	double 	fConst76;
	double 	fRec4[5];
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fConst85;
	double 	fConst86;
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fConst91;
	double 	fRec2[4];
	double 	fConst92;
	double 	fConst93;
	double 	fConst94;
	double 	fConst95;
	double 	fConst96;
	double 	fConst97;
	double 	fConst98;
	double 	fConst99;
	double 	fConst100;
	double 	fConst101;
	double 	fConst102;
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT	*fslider3_;
	double 	fRec1[5];
	double 	fConst103;
	double 	fConst104;
	double 	fConst105;
	double 	fConst106;
	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static double symclip(double x);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "sfp";
	name = N_("SuperFuzz");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<6; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<5; i++) fRec4[i] = 0;
	for (int i=0; i<4; i++) fRec2[i] = 0;
	for (int i=0; i<5; i++) fRec1[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(192000, max(1, fSamplingFreq)));
	fConst1 = (4.62843186694136e-16 * fConst0);
	fConst2 = (1.93302728487208e-10 + (fConst0 * (4.95931014548854e-11 + fConst1)));
	fConst3 = (3.7623572423036e-32 * fConst0);
	fConst4 = (2.61915652513995e-14 + fConst3);
	fConst5 = ((fConst0 * ((fConst0 * (0 - fConst4)) - 1.91661440591131e-10)) - 6.34637642560352e-12);
	fConst6 = (6.34637642560352e-12 + (fConst0 * (1.91661440591131e-10 + (fConst0 * fConst4))));
	fConst7 = ((fConst0 * (4.95931014548854e-11 - fConst1)) - 1.93302728487208e-10);
	fConst8 = (6.34637642560352e-12 + (fConst0 * ((fConst0 * (2.61915652513995e-14 - fConst3)) - 1.91661440591131e-10)));
	fConst9 = ((fConst0 * (1.91661440591131e-10 + (fConst0 * (fConst3 - 2.61915652513995e-14)))) - 6.34637642560352e-12);
	fConst10 = (1.50494289692144e-31 * fConst0);
	fConst11 = faustpower<2>(fConst0);
	fConst12 = (1.2692752851207e-11 + (fConst11 * (fConst10 - 5.23831305027991e-14)));
	fConst13 = ((fConst11 * (5.23831305027991e-14 - fConst10)) - 1.2692752851207e-11);
	fConst14 = (9.25686373388272e-16 * fConst11);
	fConst15 = (fConst14 - 3.86605456974416e-10);
	fConst16 = (2.25741434538216e-31 * fConst11);
	fConst17 = (3.83322881182262e-10 - fConst16);
	fConst18 = (fConst16 - 3.83322881182262e-10);
	fConst19 = (3.86605456974416e-10 - fConst14);
	fConst20 = (5.23831305027991e-14 + fConst10);
	fConst21 = ((fConst11 * fConst20) - 1.2692752851207e-11);
	fConst22 = (1.2692752851207e-11 + (fConst11 * (0 - fConst20)));
	fConst23 = (4.38520579615081e-15 * fConst0);
	fConst24 = (4.37121789887425e-08 + (fConst0 * ((fConst0 * (2.22485269464101e-10 - fConst23)) - 5.05253340546452e-08)));
	fConst25 = (1.31556173884524e-14 * fConst0);
	fConst26 = (1.31136536966227e-07 + (fConst0 * ((fConst0 * (fConst25 - 2.22485269464101e-10)) - 5.05253340546452e-08)));
	fConst27 = (1.31136536966227e-07 + (fConst0 * (5.05253340546452e-08 + (fConst0 * (0 - (2.22485269464101e-10 + fConst25))))));
	fConst28 = (4.37121789887425e-08 + (fConst0 * (5.05253340546452e-08 + (fConst0 * (2.22485269464101e-10 + fConst23)))));
	fConst29 = (1.0 / fConst28);
	fConst30 = (1.84708529522986e-19 * fConst0);
	fConst31 = (9.13123542662614e-16 + (fConst0 * (2.31469014072784e-15 + (fConst0 * (1.36914113807875e-15 + (fConst0 * (1.83475075894458e-16 + fConst30)))))));
	fConst32 = (1.01060172159129e-20 * fConst0);
	fConst33 = (2.03513460543809e-17 + (fConst0 * (8.06858604331616e-17 + (fConst0 * (8.0634909264833e-17 + (fConst0 * (2.87093333481566e-18 + fConst32)))))));
	fConst34 = (2.05622157103542e-20 * fConst0);
	fConst35 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (1.80052581626697e-17 + fConst34))) - 8.9116016172994e-17)) - 8.06858552953373e-17)) - 2.03513434786736e-17);
	fConst36 = (1.62091769212376e-18 * fConst0);
	fConst37 = ((fConst0 * (5.25997200776013e-17 - fConst36)) - 2.10421942979062e-16);
	fConst38 = (9.09577352129774e-21 * fConst0);
	fConst39 = (5.54006149590308e-19 + (fConst0 * (fConst38 - 2.72598623324966e-19)));
	fConst40 = (3.07685811911133e-18 * fConst0);
	fConst41 = (4.08800058161684e-16 + (fConst0 * (fConst40 - 1.00183267050103e-16)));
	fConst42 = (9.13123542662614e-16 + (fConst0 * ((fConst0 * (1.36914113807875e-15 + (fConst0 * (fConst30 - 1.83475075894458e-16)))) - 2.31469014072784e-15)));
	fConst43 = (2.03513460543809e-17 + (fConst0 * ((fConst0 * (8.0634909264833e-17 + (fConst0 * (fConst32 - 2.87093333481566e-18)))) - 8.06858604331616e-17)));
	fConst44 = ((fConst0 * (8.06858552953373e-17 + (fConst0 * ((fConst0 * (1.80052581626697e-17 - fConst34)) - 8.9116016172994e-17)))) - 2.03513434786736e-17);
	fConst45 = (7.38834118091945e-19 * fConst0);
	fConst46 = (3.65249417065045e-15 + (fConst0 * ((fConst11 * (3.66950151788917e-16 - fConst45)) - 4.62938028145568e-15)));
	fConst47 = (4.04240688636518e-20 * fConst0);
	fConst48 = (8.14053842175235e-17 + (fConst0 * ((fConst11 * (5.74186666963131e-18 - fConst47)) - 1.61371720866323e-16)));
	fConst49 = (8.22488628414166e-20 * fConst0);
	fConst50 = ((fConst0 * (1.61371710590675e-16 + (fConst11 * (fConst49 - 3.60105163253394e-17)))) - 8.14053739146943e-17);
	fConst51 = (5.47874125597568e-15 + (fConst11 * ((1.10825117713792e-18 * fConst11) - 2.7382822761575e-15)));
	fConst52 = (1.22108076326285e-16 + (fConst11 * ((6.06361032954776e-20 * fConst11) - 1.61269818529666e-16)));
	fConst53 = ((fConst11 * (1.78232032345988e-16 - (1.23373294262125e-19 * fConst11))) - 1.22108060872041e-16);
	fConst54 = (3.65249417065045e-15 + (fConst0 * (4.62938028145568e-15 + (fConst11 * (0 - (3.66950151788917e-16 + fConst45))))));
	fConst55 = (8.14053842175235e-17 + (fConst0 * (1.61371720866323e-16 + (fConst11 * (0 - (5.74186666963131e-18 + fConst47))))));
	fConst56 = ((fConst0 * ((fConst11 * (3.60105163253394e-17 + fConst49)) - 1.61371710590675e-16)) - 8.14053739146943e-17);
	fConst57 = (3.54359308063424e-24 * fConst0);
	fConst58 = (1.94643920812984e-18 + (fConst0 * ((fConst0 * (2.77200698725965e-17 + (fConst0 * ((fConst0 * (1.80920540450679e-20 - fConst57)) - 9.38774091555291e-18)))) - 2.0298803841787e-17)));
	fConst59 = (1.77179654031712e-23 * fConst0);
	fConst60 = (9.73219604064918e-18 + (fConst0 * ((fConst0 * (2.77200698725965e-17 + (fConst0 * (9.38774091555291e-18 + (fConst0 * (fConst59 - 5.42761621352036e-20)))))) - 6.08964115253609e-17)));
	fConst61 = (3.54359308063424e-23 * fConst0);
	fConst62 = (1.94643920812984e-17 + (fConst0 * ((fConst0 * ((fConst0 * (1.87754818311058e-17 + (fConst0 * (3.61841080901358e-20 - fConst61)))) - 5.54401397451929e-17)) - 4.0597607683574e-17)));
	fConst63 = (1.94643920812984e-17 + (fConst0 * (4.0597607683574e-17 + (fConst0 * ((fConst0 * ((fConst0 * (3.61841080901358e-20 + fConst61)) - 1.87754818311058e-17)) - 5.54401397451929e-17)))));
	fConst64 = (9.73219604064918e-18 + (fConst0 * (6.08964115253609e-17 + (fConst0 * (2.77200698725965e-17 + (fConst0 * ((fConst0 * (0 - (5.42761621352036e-20 + fConst59))) - 9.38774091555291e-18)))))));
	fConst65 = (1.94643920812984e-18 + (fConst0 * (2.0298803841787e-17 + (fConst0 * (2.77200698725965e-17 + (fConst0 * (9.38774091555291e-18 + (fConst0 * (1.80920540450679e-20 + fConst57)))))))));
	fConst66 = (1.0 / fConst65);
	fConst67 = (2.54522299651678e-19 * fConst0);
	fConst68 = ((fConst0 * (4.27785660896858e-17 - fConst67)) - 1.64186678306723e-17);
	fConst69 = (7.63566898955033e-19 * fConst0);
	fConst70 = ((fConst0 * (fConst69 - 4.27785660896858e-17)) - 1.64186678306723e-17);
	fConst71 = (5.09044599303355e-19 * fConst0);
	fConst72 = (3.28373356613446e-17 + (fConst0 * (0 - (8.55571321793716e-17 + fConst71))));
	fConst73 = (3.28373356613446e-17 + (fConst0 * (8.55571321793716e-17 - fConst71)));
	fConst74 = ((fConst0 * (4.27785660896858e-17 + fConst69)) - 1.64186678306723e-17);
	fConst75 = ((fConst0 * (0 - (4.27785660896858e-17 + fConst67))) - 1.64186678306723e-17);
	fConst76 = (fConst11 / fConst65);
	fConst77 = (3.6383094085191e-20 * fConst0);
	fConst78 = (5.45197246649933e-19 - fConst77);
	fConst79 = (1.23074324764453e-17 * fConst0);
	fConst80 = (2.00366534100206e-16 - fConst79);
	fConst81 = (6.48367076849506e-18 * fConst0);
	fConst82 = (fConst81 - 1.05199440155203e-16);
	fConst83 = (4.20843885958123e-16 - (9.72550615274259e-18 * fConst11));
	fConst84 = ((5.45746411277865e-20 * fConst11) - 1.10801229918062e-18);
	fConst85 = ((1.8461148714668e-17 * fConst11) - 8.17600116323368e-16);
	fConst86 = (1.05199440155203e-16 + fConst81);
	fConst87 = (0 - (5.45197246649933e-19 + fConst77));
	fConst88 = (0 - (2.00366534100206e-16 + fConst79));
	fConst89 = ((fConst0 * (0 - (5.25997200776013e-17 + fConst36))) - 2.10421942979062e-16);
	fConst90 = (5.54006149590308e-19 + (fConst0 * (2.72598623324966e-19 + fConst38)));
	fConst91 = (4.08800058161684e-16 + (fConst0 * (1.00183267050103e-16 + fConst40)));
	fConst92 = ((fConst0 * (3.18924057901876e-12 - fConst23)) - 4.98318840471683e-08);
	fConst93 = ((fConst0 * (fConst25 - 3.18924057901876e-12)) - 4.98318840471683e-08);
	fConst94 = (4.98318840471683e-08 + (fConst0 * (0 - (3.18924057901876e-12 + fConst25))));
	fConst95 = (4.98318840471683e-08 + (fConst0 * (3.18924057901876e-12 + fConst23)));
	fConst96 = (fConst0 / fConst28);
	fConst97 = (7.69334350201899e-16 * fConst0);
	fConst98 = ((fConst0 * (3.90262334011509e-11 - fConst97)) - 8.74243579774876e-09);
	fConst99 = (2.3080030506057e-15 * fConst0);
	fConst100 = ((fConst0 * (fConst99 - 3.90262334011509e-11)) - 8.74243579774876e-09);
	fConst101 = (8.74243579774876e-09 + (fConst0 * (0 - (3.90262334011509e-11 + fConst99))));
	fConst102 = (8.74243579774876e-09 + (fConst0 * (3.90262334011509e-11 + fConst97)));
	fConst103 = (4.62843186693736e-16 * fConst0);
	fConst104 = (0 - (4.69622192759233e-10 + fConst103));
	fConst105 = (9.25686373387472e-16 * fConst0);
	fConst106 = (fConst103 - 4.69622192759233e-10);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

double always_inline Dsp::symclip(double x) {
    double f = fabs(x);
    f = (f/(3.0 + f) - clip.low) * clip.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = clip.data[0];
    } else if (i >= clip.size-1) {
        f = clip.data[clip.size-1];
    } else {
	f -= i;
	f = clip.data[i]*(1-f) + clip.data[i+1]*f;
    }
    return copysign(f, -x);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
#define fslider3 (*fslider3_)
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	double 	fSlow2 = (0.007000000000000006 * double(fslider2));
	int 	iSlow3 = int(double(fslider3));
	for (int i=0; i<count; i++) {
		fRec0[0] = ((0.993 * fRec0[1]) + fSlow0);
		double fTemp0 = (6.34637642560352e-12 + (fConst0 * ((fRec0[0] * (fConst6 + (fConst5 * fRec0[0]))) + fConst2)));
		fRec3[0] = ((0.993 * fRec3[1]) + fSlow1);
		double fTemp1 = ((fRec3[0] * ((fConst35 * fRec3[0]) + fConst33)) + fConst31);
		fRec5[0] = ((double)input0[i] - (fConst66 * (((((fConst64 * fRec5[1]) + (fConst63 * fRec5[2])) + (fConst62 * fRec5[3])) + (fConst60 * fRec5[4])) + (fConst58 * fRec5[5]))));
		fRec6[0] = ((0.993 * fRec6[1]) + fSlow2);
		fRec4[0] = ((fConst76 * (fRec6[0] * ((((((fConst75 * fRec5[0]) + (fConst74 * fRec5[1])) + (fConst73 * fRec5[2])) + (fConst72 * fRec5[3])) + (fConst70 * fRec5[4])) + (fConst68 * fRec5[5])))) - (((((fRec4[1] * ((fRec3[0] * ((fConst56 * fRec3[0]) + fConst55)) + fConst54)) + (fRec4[2] * ((fRec3[0] * ((fConst53 * fRec3[0]) + fConst52)) + fConst51))) + (fRec4[3] * ((fRec3[0] * ((fConst50 * fRec3[0]) + fConst48)) + fConst46))) + (fRec4[4] * ((fRec3[0] * ((fConst44 * fRec3[0]) + fConst43)) + fConst42))) / fTemp1));
		fRec2[0] = (((1.0 + (6 * max((double)0, (fRec3[0] - 0.35)))) * symclip((fConst11 * ((((((fRec4[0] * ((fRec3[0] * (fConst91 + (fConst90 * fRec3[0]))) + fConst89)) + (fConst0 * (fRec4[1] * ((fRec3[0] * (fConst88 + (fConst87 * fRec3[0]))) + fConst86)))) + (fRec4[2] * ((fRec3[0] * (fConst85 + (fConst84 * fRec3[0]))) + fConst83))) + (fConst0 * (fRec4[3] * (fConst82 + (fRec3[0] * (fConst80 + (fConst78 * fRec3[0]))))))) + (fRec4[4] * ((fRec3[0] * (fConst41 + (fConst39 * fRec3[0]))) + fConst37))) / fTemp1)))) - (fConst29 * (((fConst27 * fRec2[1]) + (fConst26 * fRec2[2])) + (fConst24 * fRec2[3]))));
		fRec1[0] = (((iSlow3)?(fConst96 * ((((fConst102 * fRec2[0]) + (fConst101 * fRec2[1])) + (fConst100 * fRec2[2])) + (fConst98 * fRec2[3]))):(fConst96 * ((((fConst95 * fRec2[0]) + (fConst94 * fRec2[1])) + (fConst93 * fRec2[2])) + (fConst92 * fRec2[3])))) - (((((fRec1[1] * (2.53855057024141e-11 + (fConst0 * ((fRec0[0] * (fConst22 + (fConst21 * fRec0[0]))) + fConst19)))) + (fRec1[2] * (3.80782585536211e-11 + (fConst11 * ((fRec0[0] * (fConst18 + (fConst17 * fRec0[0]))) - 9.91862029097707e-11))))) + (fRec1[3] * (2.53855057024141e-11 + (fConst0 * (fConst15 + (fRec0[0] * (fConst13 + (fConst12 * fRec0[0])))))))) + (fRec1[4] * (6.34637642560352e-12 + (fConst0 * ((fRec0[0] * (fConst9 + (fConst8 * fRec0[0]))) + fConst7))))) / fTemp0));
		output0[i] = (FAUSTFLOAT)(fConst11 * ((((((fConst106 * (fRec0[0] * fRec1[0])) + (fConst0 * (fRec1[1] * (0 - (9.25686373387472e-16 * fRec0[0]))))) + (9.39244385518467e-10 * (fRec0[0] * fRec1[2]))) + (fConst105 * (fRec0[0] * fRec1[3]))) + (fConst104 * (fRec0[0] * fRec1[4]))) / fTemp0));
		// post processing
		for (int i=4; i>0; i--) fRec1[i] = fRec1[i-1];
		for (int i=3; i>0; i--) fRec2[i] = fRec2[i-1];
		for (int i=4; i>0; i--) fRec4[i] = fRec4[i-1];
		fRec6[1] = fRec6[0];
		for (int i=5; i>0; i--) fRec5[i] = fRec5[i-1];
		fRec3[1] = fRec3[0];
		fRec0[1] = fRec0[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
#undef fslider3
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case BALANCE: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case EXPANDER: 
		fslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	// static const value_pair fslider3_values[] = {{"ON"},{"OFF"},{0}};
	case TONE: 
		fslider3_ = (float*)data; // , 0.0, 0.0, 1.0, 1.0 
		break;
	case TRIM: 
		fslider1_ = (float*)data; // , 0.25, 0.0, 0.49, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   BALANCE, 
   EXPANDER, 
   TONE, 
   TRIM, 
} PortIndex;
*/

} // end namespace sfp
