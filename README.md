# Modelos de Aprendizaje Supervisado para la Clasificación de Señales EMG (**Español** / English)
Este repositorio contiene el código y los recursos para la clasificación de señales de electromiografía (EMG) utilizando varios algoritmos de aprendizaje supervisado. El proyecto tiene como objetivo comparar el rendimiento de diferentes modelos en un conjunto de datos obtenido de Kaggle y probarlos en un circuito de adquisiciòn diseñado y montado en fìsico. 

## Reconocimientos
En este proyecto, la estructura de Red Neuronal del tercer modelo implementado tomó de guía el aplicado en el código del Modelo de Kaggle encontrado en https://www.kaggle.com/code/drbilal216/emg-signal-complete-model, que está licenciado bajo Apache 2.0. Apreciamos su trabajo y lo utilizamos como guía para implementar nuestra solución, analizando y estudianto cada parte y ajustando a la aplicación del circuito montado en físico para el proyecto en cuestión. A su vez, el desarrollado del modelo Naive Bayes se construyó de cero tomando de guía el artículo encontrado en https://medium.com/analytics-vidhya/naive-bayes-algorithm-implementation-from-scratch-f9a2a12789b5 (Khushijain. Analytics Vidhya. Naive bayes algorithm implementation from scratch, 2021).

## Descripción General
En aplicaciones biomédicas las señales electromiográficas (EMG) deben ser procesadas y analizadas en detalle, por lo que se utilizan distintos métodos de procesamiento de señales, Inteligencia Artificial (IA) y redes neuronales para los problemas de interpretación y clasificación que se puedan encontrar. El objetivo general del proyecto es estudiar y aplicar un algoritmo de Machine Learning (ML) o aprendizaje automático, específicamente de aprendizaje supervisado, para clasificar señales EMG de miembro superior con una precisión no menor al 90% y una eficiencia notable. Este algoritmo, elegido cuidadosamente luego de comparaciones de performance entre distintos modelos, utilizaría estas señales para permitir el movimiento asistido de la muñeca y la mano, posibilitando así la ejecución de movimientos de agarre básico.

## Estructura del Repositorio

```
├── Models
│   ├── KNN-results.ipynb        # Notebook para el Modelo de K-Vecinos Más Cercanos: Preprocesamiento, entrenamiento y evaluación
│   ├── NB-results.ipynb        # Notebook para el Modelo de Naive Bayes: Preprocesamiento, entrenamiento y evaluación
│   └── NN-results.ipynb             # Notebook para el Modelo de Red Neuronal: Preprocesamiento, entrenamiento y evaluación
├── Test & comparisons
│   ├── Comparing_models_results.ipynb        # Notebook para la comparación de resultados de los tres modelos, utilizando los modelos ya entrenados y guardados (en la corrida de los notebooks de 'Models')
│   └── Serial_com_TESIS_results_3tests.ipynb             # Pruebas con el circuito de adquisición a tiempo real del modelo KNN implementado (arrojó mejores resultados)
├── README.md                 # Descripción general del proyecto e instrucciones
├── Environment.yml           # Archivo para crear env con conda
└── requirements.txt          # Archivo para crear env con pip
```

## Modelos
Cada notebook en el directorio de modelos incluye el pipeline completo para un modelo específico, cubriendo el preprocesamiento de datos, la extracción de características, el entrenamiento del modelo y la evaluación.

**Naive Bayes (NB)**: El algoritmo Naive Bayes (NB) se trata de una poderosa herramienta de ML, particularmente para tareas como clasificación de texto y filtrado. Su fundamento radica en el teorema de Bayes que, como ya se mencionó, permite calcular la probabilidad de la ocurrencia de un evento en función de probabilidades condicionales. Uno de los puntos fuertes de este modelo es su eficiencia, y en comparación con modelos más complejos, Naive Bayes requiere menos datos de entrenamiento y puede hacer predicciones rápidamente. Esto se debe a que supone independencia entre cada par de características, una suposición que simplifica los cálculos. Sin embargo, esta misma suposición también puede ser una debilidad. Si las características son verdaderamente interdependientes, la precisión del modelo puede verse afectada.
  Para este caso se observó el menor tiempo de ejecución tanto para el entrenamiento como para la predicción del conjunto de prueba, sin embargo obtuvo también el menor porcentaje de precisión y de puntuación F1, lo que evidencia la ya anteriormente mencionada simplicidad del modelo y la falta de adaptabilidad que lo distingue y, para casos un poco más complejos como el presente, lo deja en desventaja con otros algoritmos.

**Red Neuronal (NN)**: Las redes neuronales representan uno de los pilares fundamentales del ML y la inteligencia artificial, inspiradas en la compleja red de conexiones neuronales que componen el cerebro humano. Una red neuronal típica está compuesta por múltiples capas de nodos interconectados, cada uno de los cuales recibe información de entrada (la data) y la combina con pesos (W1, W2, ...), actuando esencialmente como diales ajustables que controlan la importancia de esa entrada para la tarea específica que la red está aprendiendo. Esta combinación ponderada de entradas es entonces procesada por una función de activación, que determina si y en qué medida la señal se transmite a nodos posteriores en la red. 
  Este modelo presenta el tiempo de entrenamiento más largo, tomando a su vez recursos computacionales un poco más considerables que el resto de los modelos, pero dando mucha más precisión que el Naive Bayes y una mejor proporción de Verdaderos y Falsos positivos/negativos.

**KNN**: El algoritmo K-Nearest Neighbors (KNN) es una herramienta sencilla y potente de aprendizaje automático para tareas de clasificación. A diferencia de algunos modelos complejos, KNN tampoco requiere conjuntos de datos de entrenamiento muy grandes. En cambio, se basa en el concepto de similitud: encontrar los vecinos más cercanos a un nuevo punto de datos.
  Con un tiempo de entrenamiento notablemente menor al de la Red Neuronal pero no tan corto como el del Naive Bayes, el algoritmo implementado de KNN resultó ser el de mejor rendimiento y el más conveniente también para una aplicación a tiempo real.

## Instalación
Para ejecutar los notebooks, asegúrate de tener el entorno requerido. Puedes configurar el entorno usando Conda o Pip.

  ### Usando Conda
    conda env create -f environment.yml
    conda activate emg-classification
  
  ### Usando Pip
    pip install -r requirements.txt
    
## Uso
Descargar el conjunto de datos: Asegúrate de tener el conjunto de datos de EMG descargado desde el repositorio UCI que puede encontrar en https://archive.ics.uci.edu/dataset/481/emg+data+for+gestures

Ejecutar los notebooks: Abre y ejecuta los notebooks en el directorio notebooks para reproducir el análisis y los resultados. Los pasos de preprocesamiento están incluidos en cada notebook.

## Resultados
Los resultados del análisis, incluidas las métricas de rendimiento y las visualizaciones, se pueden observar en los notebooks de cada modelo, así como en el apartado de comparaciones.
 Allí encontrará todas las gráficas y matrices de confusión analizadas en el proyecto.
 
## Contribuciones
Las contribuciones son bienvenidas. Si tienes sugerencias o mejoras, no dudes en abrir un issue o enviar un pull request.


# Supervised models for EMG Signals classification (Español / **English**)
This repository contains code and resources for electromyography (EMG) signal classification using various supervised learning algorithms. The project aims to compare the performance of different models on a data set obtained from Kaggle and test them in a physically designed and assembled acquisition circuit.

## Recognitions
In this project, the Neural Network structure of the third model implemented was made using as a guide the one applied in the Kaggle Model code found at https://www.kaggle.com/code/drbilal216/emg-signal-complete-model, which is licensed under Apache 2.0. We appreciate your work and use it as a guide to implement our solution, analyzing and studying each part and adjusting to the application of the physically assembled circuit for the project in question. In turn, the development of the Naive Bayes model was built from scratch taking as a guide the article found at https://medium.com/analytics-vidhya/naive-bayes-algorithm-implementation-from-scratch-f9a2a12789b5 (Khushijain. Analytics Vidhya. Naive bayes algorithm implementation from scratch, 2021).

## General description
In biomedical applications, electromyographic (EMG) signals must be processed and analyzed in detail, which is why different signal processing methods, Artificial Intelligence (AI) and neural networks are used for the interpretation and classification problems that may be encountered. The general objective of the project is to study and apply a Machine Learning (ML) algorithm, specifically supervised learning, to classify upper limb EMG signals with an accuracy of no less than 90% and notable efficiency. This algorithm, carefully chosen after performance comparisons between different models, would use these signals to allow assisted movement of the wrist and hand, thus enabling the execution of basic grip movements.

## Repository Structure

```
├── Models
│ ├── KNN-results.ipynb # Notebook for the K-Nearest Neighbors Model: Preprocessing, training and evaluation
│ ├── NB-results.ipynb # Notebook for the Naive Bayes Model: Preprocessing, training and evaluation
│ └── NN-results.ipynb # Notebook for the Neural Network Model: Preprocessing, training and evaluation
├── Test & comparisons
│ ├── Comparing_models_results.ipynb # Notebook for comparing the results of the three models, using the already trained and saved models (in the 'Models' notebook run)
│ └── Serial_com_TESIS_results_3tests.ipynb # Tests with the real-time acquisition circuit of the implemented KNN model (it gave better results)
├── README.md                 # Project overview and instructions
├── Environment.yml           # File to create env using conda
└── requirements.txt          # File to create env using pip
```

## Models
Each notebook in the model directory includes the complete pipeline for a specific model, covering data preprocessing, feature extraction, model training, and evaluation.

**Naive Bayes (NB)**: The Naive Bayes (NB) algorithm is a powerful ML tool, particularly for tasks such as text classification and filtering. Its foundation lies in Bayes' theorem which, as already mentioned, allows us to calculate the probability of the occurrence of an event based on conditional probabilities. One of the strengths of this model is its efficiency, and compared to more complex models, Naive Bayes requires less training data and can make predictions quickly. This is because it assumes independence between each pair of features, an assumption that simplifies the calculations. However, this same assumption can also be a weakness. If the features are truly interdependent, the accuracy of the model may suffer.
 For this case, the shortest execution time was observed for both training and prediction of the test set, however it also obtained the lowest percentage of precision and F1 score, which shows the previously mentioned simplicity of the model and the lack of adaptability that distinguishes it and, for slightly more complex cases like the present one, leaves it at a disadvantage with other algorithms.

**Neural Network (NN)**: Neural networks represent one of the fundamental pillars of ML and artificial intelligence, inspired by the complex network of neural connections that make up the human brain. A typical neural network is composed of multiple layers of interconnected nodes, each of which receives input information (the data) and combines it with weights (W1, W2, ...), essentially acting as adjustable dials that control the importance of that input for the specific task the network is learning. This weighted combination of inputs is then processed by an activation function, which determines whether and to what extent the signal is transmitted to subsequent nodes in the network.
 This model has the longest training time, taking slightly more computational resources than the rest of the models, but giving much more precision than Naive Bayes and a better proportion of True and False positives/negatives.
 
**KNN**: The K-Nearest Neighbors (KNN) algorithm is a simple and powerful machine learning tool for classification tasks. Unlike some complex models, KNN also does not require very large training data sets. Instead, it is based on the concept of similarity: finding the nearest neighbors to a new data point.
 With a training time notably shorter than that of the Neural Network but not as short as that of Naive Bayes, the implemented KNN algorithm turned out to be the one with the best performance and also the most convenient for a real-time application.

## Instalation
To run the notebooks, make sure you have the required environment. You can configure the environment using Conda or Pip.

 ### Using Conda
    conda env create -f environment.yml
    conda activate emg-classification

 ### Using Pip
 pip install -r requirements.txt

## Use
Download the dataset: Make sure you have the EMG dataset downloaded from the UCI repository which can be found at https://archive.ics.uci.edu/dataset/481/emg+data+for+gestures

Run the notebooks: Open and run the notebooks in the notebooks directory to reproduce the analysis and results. Preprocessing steps are included in each notebook.

## Results
Analysis results, including performance metrics and visualizations, can be seen on the notebooks for each model, as well as in the comparisons section.
 There you will find all the graphs and confusion matrices analyzed in the project.

## Contributions
Contributions are welcome. If you have suggestions or improvements, don't hesitate to open an issue or submit a pull request.

