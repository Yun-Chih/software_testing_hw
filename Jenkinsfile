pipeline {
    agent {
        docker {
            image 'gcc'
        }
    }
    stages {
        stage('Build') {
            steps {
                sh 'make'
            }
        }
        stage('Test') {
            steps {
                sh 'make test; make gcov'
            }
        }
    }
}
