
void define_geometry(char *, cell *);
void default_parameters(void);
void read_parameters(char *);
void record_data_long(long ,long ,float ,float ,float ,float ,\
float ,float ,float ,float ,float ,float ,int );

void record_data_short(long ,long ,float ,float ,float ,float ,float ,int ,float ,long );
//void record_data_pos(long ,long ,float ,float ,float ,float ,float ,float ,int ,float ,long );
void record_data_pos(long );

float vp_rejection(double ,double ,double ,double ,double );
void get_H(char *, double *);
void get_HG(float *);
void get_dipolar(double *);
void get_vp(float *, float *);
double voigt(double *,double );
void lorentz(int );

void find_edgecone(float ,float , float , float , float , float ,double[] );
void init_photon(photon *, int , double , double , double );
void empty_cells(photon *, int );
double crossing_cells(photon *, int , int );
void scattering_hydrogen(photon *, int );
void dust_interaction(photon *, int );

//	UV Background routines

	float Gamma_HI(float );
	float beta_HI(float );
	void set_spec(float ,float *, float *,spec *);
	float HI_photo_cs_verner(float );
	double HI_photo_cs_analytic(double );
	float gamma_shield(spec *,double );
	float get_xnHII(double , double ,int ,cell * );
	double int_tabulated_trap_rule(double * ,double * ,long );
