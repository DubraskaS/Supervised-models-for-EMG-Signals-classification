# Modelos de Aprendizaje Supervisado para la Clasificación de Señales EMG
Este repositorio contiene el código y los recursos para la clasificación de señales de electromiografía (EMG) utilizando varios algoritmos de aprendizaje supervisado. El proyecto es parte de una tesis que tiene como objetivo comparar el rendimiento de diferentes modelos en un conjunto de datos obtenido de Kaggle y probarlos en un circuito de adquisiciòn diseñado y montado en fìsico.

Descripción General
Las señales de electromiografía (EMG) se utilizan para medir la actividad eléctrica producida por los músculos esqueléticos. Este proyecto se centra en la clasificación de estas señales en diferentes categorías utilizando técnicas de aprendizaje supervisado. Experimentamos con varios modelos de aprendizaje automático y aprendizaje profundo para identificar el enfoque más efectivo para esta tarea.

Estructura del Repositorio
bash
Copiar código
/Modelos-supervisados-para-clasificación-de-señales-EMG
├── data
│   ├── raw/                  # Conjunto de datos original de Kaggle
│   └── processed/            # Datos procesados listos para el análisis
├── Models
│   ├── modelo_1.ipynb        # Notebook para el Modelo 1: Preprocesamiento, entrenamiento y evaluación
│   ├── modelo_2.ipynb        # Notebook para el Modelo 2: Preprocesamiento, entrenamiento y evaluación
│   └── etc.ipynb             # Notebooks adicionales para otros modelos
├── results
│   ├── modelo_1.ipynb        # Notebook para el Modelo 1: Preprocesamiento, entrenamiento y evaluación
│   └── etc.ipynb             # Notebooks adicionales para otros modelos
└── README.md                 # Descripción general del proyecto e instrucciones

# Models
Cada notebook en el directorio notebooks incluye el pipeline completo para un modelo específico, cubriendo el preprocesamiento de datos, la extracción de características, el entrenamiento del modelo y la evaluación.

Modelo 1: Detalles y resultados para el Modelo 1.
Modelo 2: Detalles y resultados para el Modelo 2.
Modelo 3: Detalles y resultados para el Modelo 3.
etc.

# Instalación
Para ejecutar los notebooks, asegúrate de tener el entorno requerido. Puedes configurar el entorno usando Conda o Pip.

  Usando Conda
    conda env create -f environment.yml
    conda activate emg-classification
  
  Usando Pip
    pip install -r requirements.txt

# Uso
Descargar el conjunto de datos: Asegúrate de tener el conjunto de datos de EMG desde Kaggle y colócalo en el directorio data/raw.

Procesar los datos: Los pasos de preprocesamiento están incluidos en cada notebook.

Ejecutar los notebooks: Abre y ejecuta los notebooks en el directorio notebooks para reproducir el análisis y los resultados.

# Resultados
Los resultados del análisis, incluidas las métricas de rendimiento y las visualizaciones, se guardan en el directorio results.

# Contribuciones
Las contribuciones son bienvenidas. Si tienes sugerencias o mejoras, no dudes en abrir un issue o enviar un pull request.


# Supervised-models-for-EMG-Signals-classification (Español / English)
Code for the classification of Electromyography (EMG) signals using various supervised learning algorithms. The project is part of a thesis that aims to compare the performance of different models on a dataset obtained from Kaggle and test on a physical circuit of adquisition.


