pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'make'
            }
        }

        stage('Test') {
            steps {
                sh 'make test'
            }
        }

        stage('Deploy') {
            steps {
                sh 'git config --global user.email "84130461+kvasanthkarthik73@users.noreply.github.com"'
                sh 'git config --global user.name "vasanth karthik"'
                sh 'git add .'
                sh 'git commit -m "Commit message"'
                sh 'git push origin main'
            }
        }
    }

    post {
        always {
            echo 'Pipeline completed'
        }
        failure {
            echo 'Pipeline failed'
        }
    }
}
